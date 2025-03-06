#include <iostream>
#include <functional>
#include <thread>
#include <mutex>
#include <atomic>
#include <vector>
#include <chrono>
#include <memory>

// 任务基类
class Task {
public:
    Task(int key, std::shared_ptr<int> p1, std::shared_ptr<int> p2) : key_(key), p1_(p1), p2_(p2), running_(false) {}
    virtual ~Task() {
        running_ = false;
        if (thread_.joinable()) {
            thread_.join();
        }
    }

    // 纯虚函数：运行任务
    virtual void run() = 0;

    // 纯虚函数：停止任务
    virtual void stop() = 0;

    // 纯虚函数：回调函数
    virtual void callback(int msg) = 0;

    // 获取任务标识符
    int getKey() const { return key_; }

    // 获取 p1
    std::shared_ptr<int> getP1() const { return p1_; }

protected:
    int key_;         // 任务标识符
    std::shared_ptr<int> p1_;         // 监视的变量
    std::shared_ptr<int> p2_;         // 操作的变量
    std::atomic<bool> running_; // 任务是否正在运行
    std::thread thread_; // 任务线程
};

// Task1
class Task1 : public Task {
public:
    Task1(int key, std::shared_ptr<int> p1, std::shared_ptr<int> p2) : Task(key, p1, p2) {}

    void run() override {
        running_ = true;
        thread_ = std::thread([this]() {
            while (running_) {
                if (*p1_ != 0) {
                    *p2_ = *p1_ + 1;
                    std::cout << "write Task1-" << key_ << ": " << *p2_ << std::endl;
                    *p1_ = 0;
                }
                std::this_thread::sleep_for(std::chrono::milliseconds(1));
            }
        });
    }

    void stop() override {
        running_ = false;
        if (thread_.joinable()) {
            thread_.join();
        }
    }

    void callback(int msg) override {
        *p1_ = msg;
    }
};

// Task2
class Task2 : public Task {
public:
    Task2(int key, std::shared_ptr<int> p1, std::shared_ptr<int> p2) : Task(key, p1, p2), k_(1) {}

    void run() override {
        running_ = true;
        thread_ = std::thread([this]() {
            while (running_) {
                if (*p1_ != 0) {
                    *p2_ = *p1_ * k_;
                    std::cout << "write Task2-" << key_ << ": " << *p2_ << std::endl;
                    *p1_ = 0;
                }
                std::this_thread::sleep_for(std::chrono::milliseconds(1));
            }
        });
    }

    void stop() override {
        running_ = false;
        if (thread_.joinable()) {
            thread_.join();
        }
    }

    void callback(int msg) override {
        k_ = msg;
        *p1_ = 1;
    }

private:
    int k_; // 比例系数
};

// Task3
class Task3 : public Task {
public:
    Task3(int key, std::shared_ptr<int> p1, std::shared_ptr<int> p2) : Task(key, p1, p2) {}

    void run() override {
        running_ = true;
        thread_ = std::thread([this]() {
            while (running_) {
                if (*p1_ != 0) {
                    int t = *p1_;
                    *p1_ = 0;
                    *p2_ = t;
                    std::cout << "write Task3-" << key_ << ": " << *p2_ << std::endl;
                    std::this_thread::sleep_for(std::chrono::milliseconds(1));
                    *p2_ = t + 1;
                    std::cout << "write Task3-" << key_ << ": " << *p2_ << std::endl;
                }
                std::this_thread::sleep_for(std::chrono::milliseconds(1));
            }
        });
    }

    void stop() override {
        running_ = false;
        if (thread_.joinable()) {
            thread_.join();
        }
    }

    void callback(int msg) override {
        *p1_ = msg;
    }
};

// 任务管理类
class TaskManager {
public:
    TaskManager() : out_(std::make_shared<int>(0)) {
        // 启动线程1：监视 out_
        thread1_ = std::thread([this]() {
            while (true) {
                std::lock_guard<std::mutex> lock(mutex_);
                if (*out_ != 0) {
                    std::cout << "Output: " << *out_ << std::endl;
                    *out_ = 0;
                }
            }
        });

        // 启动线程2：接收输入
        thread2_ = std::thread([this]() {
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
                    callbackTask(key, msg);
                }
            }
        });
    }

    ~TaskManager() {
        if (thread1_.joinable()) thread1_.join();
        if (thread2_.joinable()) thread2_.join();
        for (auto& task : tasks_) {
            task->stop(); // 确保任务停止
        }
    }

    void addTask(int key, int kind) {
        std::lock_guard<std::mutex> lock(mutex_);
        auto p1 = std::make_shared<int>(0);
        std::shared_ptr<int> p2;

        if (tasks_.empty()) {
            p2 = out_;
        } else {
            auto& lastTask = tasks_.back();
            p2 = lastTask->getP1();
        }

        std::unique_ptr<Task> task;

        switch (kind) {
            case 1: task = std::make_unique<Task1>(key, p1, p2); break;
            case 2: task = std::make_unique<Task2>(key, p1, p2); break;
            case 3: task = std::make_unique<Task3>(key, p1, p2); break;
            default: 
                std::cerr << "Invalid task kind!" << std::endl; 
                return;
        }

        tasks_.push_back(std::move(task));
        tasks_.back()->run();
    }

    void popTask() {
        std::lock_guard<std::mutex> lock(mutex_);
        if (!tasks_.empty()) {
            tasks_.back()->stop(); // 确保任务停止
            tasks_.pop_back();
        }
    }

    void callbackTask(int key, int msg) {
        std::lock_guard<std::mutex> lock(mutex_);
        for (auto& task : tasks_) {
            if (task->getKey() == key) {
                task->callback(msg);
                break;
            }
        }
    }

private:
    std::vector<std::unique_ptr<Task>> tasks_; // 任务列表
    std::shared_ptr<int> out_;     // 输出变量
    std::thread thread1_;      // 线程1：监视 out_
    std::thread thread2_;      // 线程2：接收输入
    std::mutex mutex_;         // 互斥锁
};

// 主函数
int main() {
    TaskManager manager;
    return 0;
}
