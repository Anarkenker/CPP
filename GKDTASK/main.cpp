#include <iostream>
#include <array>
#include <thread>
#include <mutex>
#include <mutex>
#include <functional>
#include <cstdio>
#include <chrono>
using namespace std;

class TaskSchedule{
private:
    int out;
    array<int, 10000> a;
    thread Thread1, Thread2;
public:
    void Monitor(){
        while(true){
            mutex lock;
            lock.lock();
            if(out != 0){
                for(int i = 0; i < 10000; i++){
                    a[i] = out;
                }
                out = 0;
            }
            lock.unlock();
            this_thread::sleep_for(chrono::milliseconds(1));
        }
    }
    TaskSchedule(){
        Thread1 = thread(&TaskSchedule::Monitor);
    }
    void addTask(int key, int kind){
        mutex lock;
    }
    void PopBack(){

    }
    void CallBackTask(int key, int msg){

    }
};

class Task{
protected:
    int *p1, *p2;
    int key;
    thread Thread;
public:
    virtual void Run() = 0;
    virtual void Stop() = 0;
    virtual void Calculate(function<void(int)>& CallBack, int Message) = 0;
    virtual void CallBack(int Message) = 0;
    virtual ~Task() = 0;
};

class Task1 : public Task{
public:
    void Run() override{
        while(true){
            if(*p1 != 0){
                *p2 = *p1 + 1;
                *p1 = 0;
            }
            this_thread::sleep_for(chrono::milliseconds(1));
        }
    }
    
    void CallBack(int Message) override{
        *p1 = Message;
        *p2 = *p1 + 1;
    }
    void Calculate(function<void(int)>& CallBack, int Message) override{
        *p2 = *p1 + 1;
        CallBack(*p2);
    }
};

class Task2 : public Task{
public: 
    void Calculate(function<void(int)>& CallBack ,int Message) override{
        if(p1)
    }
};

class Task3 : public Task{
public: 
    void Calculate(function<void(int)>& CallBack, int Message) override{
        if(p1)
    }
};

int main(){
    TaskSchedule taskSchedule;
    return 0;
}