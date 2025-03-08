#include<iostream>
#include<cstdio>
#include<string>
class information{
public:
    std::string name; 
    information();
};
information::information(){
    std::cout << "cin your name";
    std::cin >> name;
}
class student : protected information{//保护继承还有私有继承
protected://private可以替换为protected可以被派生类继承
   std::string name;
public:
    student();
    ~student();
};
student::student(){
}
student::~student(){
}
int main(){
    information aa;
    return 0;
}
