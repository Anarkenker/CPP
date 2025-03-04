#include <iostream>
#include <vector>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <queue>
#include <chrono>
#include <mutex>

class TaskManager {
protected:
    int out;
    std::vector<Task*> tasks;
    std::vector<int> a;
    std::mutex mtx;
};