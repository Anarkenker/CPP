class student{
public:
    int age;
    std::string name;
    student();
    static int cnt;//静态成员数据，统计有多少对象
    static int count();//静态成员函数，返回有多少对象；
};
//那么如何定义静态成员呢？
int student::cnt = 0;
student::student(){
    age = 20;
    name = "张三";
    cnt = cnt + 1;
}
int student::count(){
    return cnt;
}//静态成员如果不依赖与对象就可以直接用student :: count();
int main(){
    student aa;
    aa.count();
    student::count();
//这两个返回值都是一样 
}