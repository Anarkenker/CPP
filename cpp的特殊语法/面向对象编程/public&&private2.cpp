#include<iostream>
class student{
public://公有部分
    void print_age_public();//这是公有的方法,外面看得到
private:
    void print_age_private();//这是私有的方法，外面看不到
};
void student::print_age_public(){
    print_age_private();
}
void student::print_age_private(){
    std::cout << "18";
}