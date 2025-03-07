#include<iostream>
#include<array>
#include<thread>
#include<mutex>
#include<vector>
#include<mutex>
#include<functional>
#include<cstdio>
#include<chrono>
#include<list>
#include<atomic>

using namespace std;
mutex lock1, lock2;

mutex lock_io;
#define IO_LOCK lock_guard<mutex> io_lock(lock_io)

using IntPtr = shared_ptr<atomic<int>>;



class Task{
protected:
    shared_ptr<atomic<int>> p1, p2;
    int key;
    thread Thread;
    int kind;
    atomic<bool> finish = false;
public:

    Task(const IntPtr& p1, const IntPtr& p2, int key,int kind): p1(p1), p2(p2), key(key), kind(kind){
    }

    void Monitor(){
        Calculate();
    }
    void Run(){
        Thread = thread([this](){
            while(finish != true){
                Monitor();
                this_thread::sleep_for(chrono::milliseconds(1));
            }
        });
    }
    void Stop(){
        finish = true;
        Thread.join();
    };
    void ChangeKey(int k){
        key = k;
    }
    int GetKey() const{
        return key;
    }

    virtual void Calculate() = 0;
    virtual void CallBack(int Message) = 0;

    virtual ~Task() = default;
protected:
    inline void WriteToP2(int value){
        *p2 = value;
        IO_LOCK;
        printf("write Task: %d-%d: %d\n", key, kind, value);
    }
};

class Task1 : public Task{
public:
    Task1(const IntPtr& p1, const IntPtr& p2, int key): Task(p1, p2, key, 1){
    }
    void CallBack(int Message) override{
        *p1 = Message;
    }
    void Calculate() override{
        WriteToP2(*p1 + 1);
        *p1 = 0;
    }
};

class Task2 : public Task{
public:
    Task2(const IntPtr& p1, const IntPtr& p2, int key): Task(p1, p2, key, 1){
}
    void CallBack(int Message) override{
        k = Message;
    }
    void Calculate() override{
        WriteToP2(*p1 * k);
        *p1 = 0;
    }
private:
    int k = 1;
};

class Task3 : public Task{
public:
    Task3(const IntPtr& p1, const IntPtr& p2, int key): Task(p1, p2, key, 1){
    }
    void CallBack(int Message) override{
        *p1 = Message;
    }
    void Calculate() override{
        t = *p1;
        *p1 = 0;
        WriteToP2(t);
        this_thread::sleep_for(chrono::milliseconds(1));
        WriteToP2(t + 1);
    }

private:
    int t;
};

class TaskSchedule{
private:
    IntPtr out;
    list<IntPtr> a;
    thread thread1, thread2;
    vector<shared_ptr<Task>> tasks;
public:
    void AddTask(){
        int kind, key;
        cin >> key >> kind;
        auto p1 = make_shared<atomic<int>>(0);
        auto p2 = (a.empty()) ? out : a.back();

        a.push_back(p2);

        shared_ptr<Task> task;
        switch(kind){
            case 1:
                task = make_shared<Task1>(p1, p2, key);
                break;
            case 2:
                task = make_shared<Task2>(p1, p2, key);
                break;
            case 3:
                task = make_shared<Task3>(p1, p2, key);
                break;
        }
        task->ChangeKey(key);
        tasks.push_back(task);
        task->Run();
    }

    void PopTask(){
        if(a.size() != 0){
            tasks.back()->Stop();
            a.pop_back();
            tasks.pop_back();
        }
    }

    void CallBack(int key, int message){
        // for(auto it = a.begin(); it != a.end(); it++){
        //     if(*it == key){
        //         ()
        //         break;
        //     }
        // }

        for(auto task:tasks){
            if(task->GetKey() == key){
                task->CallBack(message);
                break;
            }
        }
    }

    TaskSchedule(){
        out = make_shared<atomic<int>>(0);
    }

    void Run(){
        thread1 = thread ([this](){
            while(true){
                if(*out != 0){
                    IO_LOCK;
                    cout << "Out: " << *out << endl;
                    *out = 0;
                }
                this_thread::sleep_for(chrono::milliseconds(1));
            }
        });
        thread2 = thread ([this](){
            string command;
            while(cin >> command){
                if(command == "add"){
                    AddTask();
                }
                else if(command == "pop"){
                    PopTask();
                }
                else if(command == "callback"){
                    int key, message;
                    cin >> key >> message;
                    CallBack(key, message);
                }
            }
        });
    }

    ~TaskSchedule(){
        thread1.join();
        thread2.join();
    }

};

int main(){
    TaskSchedule taskSchedule;
    taskSchedule.Run();

    return 0;
}