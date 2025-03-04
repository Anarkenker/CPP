#include <iostream>
#include <vector>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>
#include <chrono>

// 前置声明
class Task;

// 任务管理类
class TaskManager {
private:
    int out;
    std::vector<int> a;
    std::vector<Task*> tasks;
    std::mutex mtx;
    std::condition_variable cv;
    bool stopFlag = false;

    // 线程 1：监视 out 变量
    void monitorOut() {
        while (!stopFlag) {
            std::unique_lock<std::mutex> lock(mtx);
            cv.wait(lock, [this] { return out != 0 || stopFlag; });
            if (stopFlag) break;
            std::cout << "out: " << out << std::endl;
            out = 0;
        }
    }

    // 线程 2：处理控制信号
    void handleInput() {
        std::string command;
        while (std::cin >> command) {
            if (command == "add") {
                int key, kind;
                std::cin >> key >> kind;
                addTask(key, kind);
            } else if (command == "pop") {
                popTask();
            } else if (command == "callback") {
                int key, msg;
                std::cin >> key >> msg;
                triggerCallback(key, msg);
            }
        }
        {
            std::lock_guard<std::mutex> lock(mtx);
            stopFlag = true;
        }
        cv.notify_all();
    }

public:
    TaskManager() : out(0) {
        std::thread t1(&TaskManager::monitorOut, this);
        std::thread t2(&TaskManager::handleInput, this);
        t1.detach();
        t2.detach();
    }

    ~TaskManager() {
        for (auto task : tasks) {
            delete task;
        }
    }

    // 添加任务
    void addTask(int key, int kind);

    // 删除任务
    void popTask() {
        std::lock_guard<std::mutex> lock(mtx);
        if (!tasks.empty()) {
            tasks.back()->stop();
            delete tasks.back();
            tasks.pop_back();
            a.pop_back();
        }
    }

    // 触发回调
    void triggerCallback(int key, int msg) {
        std::lock_guard<std::mutex> lock(mtx);
        for (auto task : tasks) {
            if (task->getKey() == key) {
                task->callback(msg);
                break;
            }
        }
    }
};

// 任务基类
class Task {
protected:
    int key;
    int* p1;
    int* p2;
    std::string kind;
    std::thread taskThread;
    bool running = false;

    virtual void doOperation() = 0;

    void runTask() {
        while (running) {
            if (*p1 != 0) {
                doOperation();
            }
            std::this_thread::sleep_for(std::chrono::milliseconds(10));
        }
    }

public:
    Task(int k, int* pp1, int* pp2, const std::string& kd) : key(k), p1(pp1), p2(pp2), kind(kd) {
        running = true;
        taskThread = std::thread(&Task::runTask, this);
    }

    virtual ~Task() {
        stop();
        if (taskThread.joinable()) {
            taskThread.join();
        }
    }

    int getKey() const {
        return key;
    }

    virtual void callback(int msg) = 0;

    void run() {
        running = true;
        if (!taskThread.joinable()) {
            taskThread = std::thread(&Task::runTask, this);
        }
    }

    void stop() {
        running = false;
    }
};

// Task1 类
class Task1 : public Task {
protected:
    void doOperation() override {
        int val = (*p1) + 1;
        *p2 = val;
        *p1 = 0;
        std::cout << "write " << kind << "-" << key << ": " << val << std::endl;
    }

public:
    Task1(int k, int* pp1, int* pp2) : Task(k, pp1, pp2, "Task1") {}

    void callback(int msg) override {
        *p1 = msg;
    }
};

// Task2 类
class Task2 : public Task {
private:
    int k;

protected:
    void doOperation() override {
        int val = (*p1) * k;
        *p2 = val;
        *p1 = 0;
        std::cout << "write " << kind << "-" << key << ": " << val << std::endl;
    }

public:
    Task2(int k, int* pp1, int* pp2) : Task(k, pp1, pp2, "Task2"), k(1) {}

    void callback(int msg) override {
        k = msg;
        *p1 = 1;
    }
};

// Task3 类
class Task3 : public Task {
protected:
    void doOperation() override {
        int t = *p1;
        *p1 = 0;
        *p2 = t;
        std::cout << "write " << kind << "-" << key << ": " << t << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        *p2 = t + 1;
        std::cout << "write " << kind << "-" << key << ": " << t + 1 << std::endl;
    }

public:
    Task3(int k, int* pp1, int* pp2) : Task(k, pp1, pp2, "Task3") {}

    void callback(int msg) override {
        *p1 = msg;
    }
};

// 任务管理类添加任务的实现
void TaskManager::addTask(int key, int kind) {
    std::lock_guard<std::mutex> lock(mtx);
    a.push_back(0);
    int* p1 = &a.back();
    int* p2;
    if (tasks.empty()) {
        p2 = &out;
    } else {
        p2 = &a[a.size() - 2];
    }
    Task* task;
    switch (kind) {
        case 1:
            task = new Task1(key, p1, p2);
            break;
        case 2:
            task = new Task2(key, p1, p2);
            break;
        case 3:
            task = new Task3(key, p1, p2);
            break;
        default:
            return;
    }
    tasks.push_back(task);
}

int main() {
    TaskManager manager;
    while (true) {
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    return 0;
}