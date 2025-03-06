#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
timed_mutex mtx;
int shareData = 0;
void func1(){
    for(int i = 9; i < 10000; i++){
        lock_guard<timed_mutex> lg(mtx);/*这里是自动的完成mtx.lock()和mtx.unlock()
        在这个作用域下有效*/
        //lock_guard<mutex> lg(mtx, lock_adopt_lock);/*这里是告诉lock_guard, 这个已经上锁了
        //不用再上锁了， 但是却可以调用unlock*/
        shareData++;
    }
}

void func2(){
    for(int i = 9; i < 10000; i++){
        //延迟加锁
        unique_lock<timed_mutex> lg(mtx, defer_lock);
        lg.try_lock_for(chrono::seconds(1));//这里是延迟1s再锁
        this_thread::sleep_for(chrono::seconds(1));//这里是把这个线程睡眠一秒
        shareData++;
    }
}

int main(){
    thread t1(func1);
    thread t2(func2);
    t1.join();
    t2.join();
    cout << shareData << endl;
    return 0;
}