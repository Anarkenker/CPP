#include<iostream>
#include<cstdio>
using namespace std;
class student{
public:
    int age;
    string name;
    bool set(int i);//这就是成员函数的声明， 又叫方法
    bool read() const;//后面加了const，表示这个函数只读不写
};
bool student :: read() const{ //常成员函数的内容，后面加了const，只读不写;
    cout << name;
    cout << age;
    return true;
}
bool student :: set(int i){
    cout << name;
    cout << age;
}
int main(){
    student aa;
    aa.read();
}