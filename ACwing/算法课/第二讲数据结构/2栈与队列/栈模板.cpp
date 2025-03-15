#include<iostream>
using namespace std;
//用数组模拟栈
const int N = 1e6 + 10;
int stk[N], tt;
void init(){
    tt = 0;
}
void Push(int x){
    stk[++tt] = x;
}
void Pop(){
    tt--;
}
bool Judge(){//判断栈是不是空的
    if(tt > 0) return true;
    else return false;
}
//stk[tt]这个是栈顶
int Top(){
    return stk[tt];
}
int main(){

}