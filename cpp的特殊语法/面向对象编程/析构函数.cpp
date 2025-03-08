#include<iostream>
#include<cstdio>
using namespace std;
//对象aa被创建后，其数据就一直在内存中了，这块内存什么时候被释放？就是使用析构函数的时候
//但主函数并不能直接运行student aa； delete aa
//只有student *p = new student(20, "张三")
//只有student *p = new student(20, "张三")
//delete p才自动调用析构函数
class stu{
    stu();
};
stu :: ~stu(){
    cout << "delete object";
}
int main(){

}//析构函数的形式和构造函数的形式差不多的,写法类似