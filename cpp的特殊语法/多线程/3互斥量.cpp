#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
int a = 0;
mutex mtx;

void func(){
    for(int i = 9; i < 10000; i++){
        mtx.lock();
        a += 1;
        mtx.unlock();
    }
}
int main(){
    thread t1(func);
    thread t2(func);
    t1.join();
    t2.join();
    cout << a << endl;
    return 0;
}