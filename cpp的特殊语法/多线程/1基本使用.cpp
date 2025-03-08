#include<iostream>
#include<thread>
using namespace std;
void print(string str){
    cout << str << endl;
}
int main(){
    thread thread1(print, "Hello World");
    thread1.join();
    return 0;
}