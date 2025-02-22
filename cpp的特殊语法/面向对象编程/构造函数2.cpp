#include<iostream>
#include<cstdio>
using namespace std;
//目的是给对象赋值
//创建对象的时候就给对象赋值了
class student{
public:
    int age;
    string name;
    student();//这是构造函数，没有输入和返回值，并且名字和类的名字一样；
    student(int a, string b);
};
student :: student (){
    age = 20;
    name = "Anarkenker";
}
student :: student(int a, string b){
    age = a;
    name = b;
}
//必须这么写
int main(){
    student aa;//这里自动调用构造函数的值，就不需要自己赋值了
    student(20, "Anarkenker");
}