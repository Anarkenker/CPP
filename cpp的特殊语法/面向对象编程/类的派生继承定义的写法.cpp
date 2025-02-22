//所谓派生是对父类而言的
//所谓继承，是相对子类而言的
//这个student是父类，也叫基类和超类
#include<string>
#include<cstdio>
#include<iostream>
class undergraduate : public student{//本科生定义，冒号后面表示从student类共有派生而来
private:
    std::string course;
public:
    undergraduate();
    ~undergraduate();
};//子类可以自动继承父类的属性和方法
undergraduate::undergraduate(){
    std :: cin >> course;
}
undergraduate::~undergraduate(){

}
