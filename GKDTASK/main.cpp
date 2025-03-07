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
class TaskSchedule{
private:
    atomic<int> out;
    list<int> a;
    thread thread1, thread2;
    vector<Task> tasks;
public:
    void AddTask(){
        int kind, key;
        cin >> key >> kind;
        a.push_back(key);
        Task* task;
        switch(kind){
            case 1:
                task = new Task1();
                break;
            case 2:
                task = new Task2();
                break;
            case 3:
                task = new Task3();
                break;
        }
        task->ChangeKey(key);
        tasks.push_back(*task);
        task->Run();
    }

    void PopTask(){
        if(a.size() != 0){
            a.pop_back();
            tasks.back().Stop();
            tasks.pop_back();
        }
    }

    void CallBack(int key, int message){
        for(auto it = a.begin(); it != a.end(); it++){
            if(*it == key){
                out = message;
                break;
            }
        }
    }
    
    TaskSchedule(){
        thread1 = thread ([this](){
            while(true){
                if(out != 0){
                    cout << "Out: " << out << endl;
                    out = 0;
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
};

class Task{
protected:
    shared_ptr<int> p1, p2;
    int key;
    thread Thread;
public:
    void Monitor(){
        Calculate(*p1);
    }
    void Run(){
        Thread = thread([this](){
            while(true){
                Monitor();
                this_thread::sleep_for(chrono::milliseconds(1));
            }
        });
    }
    void Stop(){
        Thread.join();
    };
    int ChangeKey(int k){
        key = k;
    }
    int GetKey(){
        return key;
    }
    virtual void Calculate(int Message) = 0;
    virtual void CallBack(int Message) = 0;
    
    virtual ~Task() = 0;
};

class Task1 : public Task{
public:
    void CallBack(int Message) override{
        *p1 = Message;
        *p2 = *p1 + 1;
    }
    void Calculate(int Message) override{
        *p2 = *p1 + 1;
        CallBack(*p2);
    }
    Task1(){

    }
};

class Task2 : public Task{
public:
    void CallBack(int Message) override{
        k = Message;
    }
    void Calculate(int Message) override{
        *p2 = *p1 * k;
        *p1 = 0;
        CallBack(Message);
    }

private:
    int k = 1;
};

class Task3 : public Task{
public: 
    void CallBack(int Message) override{
        *p1 = Message;
    }
    void Calculate(int Message) override{
        t = *p1;
        *p1 = 0;
        this_thread::sleep_for(chrono::milliseconds(1));
        CallBack(t);
    }
private:
    int t;
};

int main(){
    TaskSchedule taskSchedule;
    return 0;
}