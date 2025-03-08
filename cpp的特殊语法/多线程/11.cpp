#include<iostream>
#include<cstdio>
#include<thread>
#include<atomic>
#include<mutex>
using namespace std;
atomic<int> shareData(0);
//而且这样相对于mutex来说，效率更高
void func(){
    for(int i = 0; i < 10000; i++){
        shareData++;
        //这里是原子操作，不会出现线程数据竞争
    }
}

int main(){
    thread t1(func);
    thread t2(func);
    t1.join();
    t2.join();
    cout << shareData << endl;
    return 0;
}