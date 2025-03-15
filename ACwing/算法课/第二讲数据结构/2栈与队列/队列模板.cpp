#include<iostream>
using namespace std;
const int N = 1e6 + 10;
int q[N], hh, tt;
//hh是队列头, tt是队列尾
//在队尾插入元素， 在队头弹出元素
void init(){
    tt = -1;
    hh = 0;
}
void push(int x){
    q[++tt] = x;
}
void pop(){
    hh++;
}
bool empty(){
    return hh > tt;//true为空反之不是空
}
int front(){
    return q[hh];
}

int main(){
    init();
    //入队操作
    push(1);
    push(2);
    push(3);
    cout << front() << endl;
    pop();
    cout << front() << endl;
    cout << "队列是否为空" << (empty() ? "是" : "否") << endl;
    return 0;
}