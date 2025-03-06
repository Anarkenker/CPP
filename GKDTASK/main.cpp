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
    mutex Tock;
    thread Thread1;
public:
    TaskSchedule(){
        thread1 = thread([this])(0){
            while(true){
                if(out != 0){
                    cout << "Output: " << out << endl;
                    out = 0;
                }
            }
        }
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
    void Calculate(function<void(int)>& CallBack, int Message) override{
        if(p1)
    }
};
i
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