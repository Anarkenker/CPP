#include<iostream>
#include<cstdio>
#include<string>
//子类不能直接继承父类的构造函数，只能调用父辈的构造函数
//换句话说，命名子类对象首先是通过父类构造函数，然后再进行子类的构造函数；
class student
{
private:
    std::string name;
    int age;
public:
    student();
    ~student();
};

student::student()
{
}
student::~student()
{
}
class postgraduate : public student
{
private:

public:
    postgraduate(/* args */);
    ~postgraduate();
};

postgraduate::postgraduate(/* args */)
{
}

postgraduate::~postgraduate()
{
}

