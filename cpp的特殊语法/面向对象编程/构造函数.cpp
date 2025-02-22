#include<iostream>
#include<cstdio>
#include<string>
using namespace std;

// 定义 student 类
class student{
public:
    int age;
    string name;
    student(); // 构造函数声明，没有输入和返回值，并且名字和类的名字一样
}; // 类定义结尾需要加分号

// 构造函数的实现
student :: student (){
    age = 20;
    name = "Anarkenker";
}

int main(){
    student aa; // 创建 student 类的对象 aa，自动调用构造函数进行初始化
    // 输出对象 aa 的成员变量值，验证初始化是否成功
    cout << "Name: " << aa.name << ", Age: " << aa.age << endl;
    return 0;
}