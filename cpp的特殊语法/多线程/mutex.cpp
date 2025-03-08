#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
mutex mtx1, mtx2, mtx;

int gob = 0;
void task1(){
    for(int i = 0; i < 100; i++){
        mtx1.lock();
        mtx2.lock();
        gob++;
        gob--;
        mtx.unlock();
    }
}

int main(){
    task1();
    return 0;
}