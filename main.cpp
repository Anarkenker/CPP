#include <print>
#include <thread>
#include <mutex>
#include <atomic>
#include <map>
#include <stack>
#include <functional>
#include <iostream>

class Task;

using TaskCreateFunc = std::function<Task*(const std::shared_ptr<std::atomic<int>> &p1,const std::shared_ptr<std::atomic<int>> &p2, int key)>;
std::map<std::string,TaskCreateFunc> g_task_map;

#define CREATE_FUNC(type) static Task* create(const std::shared_ptr<std::atomic<int>> &p1,const std::shared_ptr<std::atomic<int>> &p2, const int key) { return new type(p1,p2,key); }

inline void registerTask(const TaskCreateFunc& func, const std::string& name)
{
    g_task_map[name] = func;
}

inline Task* createTask(const std::string& name,const std::shared_ptr<std::atomic<int>> &p1,const std::shared_ptr<std::atomic<int>> &p2, int key)
{
    if(!g_task_map.contains(name))
    {
        std::println("No task '{}' found.",name);
        return nullptr;
    }

    return g_task_map[name](p1,p2,key);
}

class Task
{
public:
    Task(const std::shared_ptr<std::atomic<int>> &p1,const std::shared_ptr<std::atomic<int>> &p2, const int key): m_key(key), m_p1(p1),m_p2(p2)
    {
    }
    virtual ~Task()
    {
        if(m_thread.joinable())
            stop();
    }
    virtual void callback(int msg) = 0;

    void run()
    {
        m_thread = std::thread([this]
        {
            while(!m_finish)
            {
                _execute();
                std::this_thread::sleep_for(std::chrono::milliseconds(1));
            }
        });
    }

    int key()const{return m_key;}

    void stop(this Task& self)
    {
        self.m_finish = true;
        self.m_thread.join();
    }
protected:
    void _write_p2(this Task& self,int val)
    {
        *self.m_p2 = val;
        std::println("write {}-{}: {}",self.m_kind,self.m_key,val);
    }
    virtual void _execute() = 0;
protected:
    int m_key;
    std::shared_ptr<std::atomic<int>> m_p1,m_p2;
    std::thread m_thread;
    std::string m_kind;
    std::atomic<bool> m_finish = false;
};

class Task1: public Task
{
public:
    Task1(const std::shared_ptr<std::atomic<int>> &p1,const std::shared_ptr<std::atomic<int>> &p2, const int key): Task(p1,p2,key)
    {
        m_kind = "Task1";
    }
    CREATE_FUNC(Task1);

    void callback(int msg) override
    {
        *m_p1 = msg;
    }
private:
    void _execute() override
    {
        _write_p2(*m_p1 + 1);
        *m_p1 = 0;
   }
};

class Task2: public Task
{
public:
    Task2(const std::shared_ptr<std::atomic<int>> &p1,const std::shared_ptr<std::atomic<int>> &p2, const int key): Task(p1,p2,key)
    {
        m_kind = "Task2";
    }
    CREATE_FUNC(Task2);
    void callback(int msg) override
    {
        m_k = msg;
        *m_p1 = 1;
    }
private:
    void _execute() override
    {
        _write_p2((*m_p1) * m_k);
        *m_p1 = 0;
    }
private:
    int m_k = 1;
};

class Task3: public Task
{
public:
    Task3(const std::shared_ptr<std::atomic<int>> &p1,const std::shared_ptr<std::atomic<int>> &p2, const int key): Task(p1,p2,key)
    {
        m_kind = "Task3";
    }

    CREATE_FUNC(Task3);

    void callback(int msg) override
    {
        *m_p1 = msg;
    }
private:
    void _execute() override
    {
        m_t = *m_p1;
        *m_p1 = 0;

        std::this_thread::sleep_for(std::chrono::milliseconds(1));

        _write_p2(m_t + 1);
    }
private:
    int m_t = 0;
};

class TaskManager
{
public:
    using TaskPair = std::pair<Task*,std::shared_ptr<std::atomic<int>>>;

    TaskManager(): m_out(new std::atomic<int>)
    {
    }

    void add(int key, const std::string& kind)
    {
        std::shared_ptr<std::atomic<int>> p1(new std::atomic<int>);
        std::shared_ptr<std::atomic<int>> p2 = nullptr;

        if(m_tasks.empty())
            p2 = m_out;
        else p2 = m_tasks.back().second;

        Task* task = createTask(kind,p1,p2,key);
        task->run();

        m_tasks.push_back(std::make_pair(task,p1));
    }

    void start()
    {
        m_monmitor_thread = std::thread(std::bind(&TaskManager::_monitor,this));
        _repl();
    }
private:
    [[noreturn]] void _repl()
    {
        std::string command;
        while(true)
        {
            std::cin >> command;
            if(command == "add")
            {
                int key;
                std::string kind;
                std::cin >> key >> kind;
                add(key,kind);
            }
            else if(command == "pop")
            {
                m_tasks.back().first->stop();
                m_tasks.pop_back();
            }
            else if(command == "callback")
            {
                int key,msg;
                std::cin >> key >> msg;

                for(auto& task:m_tasks)
                    if(task.first->key() == key)
                        task.first->callback(msg);
            }
            else
            {
                std::println("No command '{}' found.",command);
            }
        }
    }

    void _monitor()
    {
        while(true)
        {
            if(*m_out != 0)
            {
                std::println("{}",m_out->load());
                *m_out = 0;
            }

            std::this_thread::sleep_for(std::chrono::milliseconds(1000));
        }
    }
private:
    std::shared_ptr<std::atomic<int>> m_out;
    std::vector<TaskPair> m_tasks;
    std::thread m_monmitor_thread;
};

int main()
{
    registerTask(&Task1::create,"Task1");
    registerTask(&Task2::create,"Task2");
    registerTask(&Task3::create,"Task3");

    TaskManager mgr;
    mgr.start();
    return 0;
}
