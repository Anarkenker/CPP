//方法真的专属于某个类吗
//在新的编程语言中，比如说python/ruby，两个字符串是可以执行加法的
//为什么不会报错，就是因为大名鼎鼎的多态
//献给一个不太严谨的说法，其思想是，不同类的对象也可以用相同的方法，这里指的是相同方法的名字，而方法中具体做了什么不一样
//当ab是数字，符号+执行传统意义上的加法，当是字符串执行另一种加法


//c++中比较古板，如果要实现相同的函数名执行不同的内容， 有三种方法：
//重载， 隐藏， 覆盖（override ， 又叫重写，这个才是c++的多态）
//重载不依赖于对象，依赖于编译器
//隐藏和覆盖的同名函数的参数可以完全一样

class student{
public: 
    void study(bool a);
};
void student::study(bool a){
    std::cout << "study";
}
class postgraduate : public student{
public:
    void study(int b){
        std::cout << "xinp";
    }
};
int main(){
    postgraduate bb;//子类对象
    student aa;//父类对象
    bb.study(2);//研究生对象调用研究生的study方法，参数为int，打印出芯片设计
    aa.study(true);//学生对象第哦啊用学生的study方法，参数为bool，打印出好好学习
    bb.study(true);//这行出错，研究生对象，但参数为bool， 本应该重载父类的study，但父类被隐藏了，系统找不到对应的方法；
}