#include<iostream>
class student{
    public: 
        void study(bool a);
    };
    void student::study(bool a){
        std::cout << "study";
    }
class postgraduate : public student{
public:
    virtual void study(int b){//代表这是一个虚函数
        std::cout << "xinp";
    }
};