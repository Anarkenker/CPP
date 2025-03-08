#include<iostream>
#include<thread>
#include<mutex>
using namespace std;
mutex mt1, mt2;;
void func_1(){
    for(int i = 0; i < 50; i++){
        mt1.lock();
        mt2.lock();
        mt1.unlock();
        mt2.unlock();
    }
}   

void func_2(){
    for(int i = 0; i < 50; i++){
        mt2.lock();
        mt1.lock();
        mt1.unlock();
        mt2.unlock();
    }
}
int main(){
    thread t1(func_1);
    thread t2(func_2);
    t1.join();
    t2.join();
    cout << "Hello World" << endl;
    return 0;
}