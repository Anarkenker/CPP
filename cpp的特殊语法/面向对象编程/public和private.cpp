class student{
public://公有部分
    void print_name();//这是公有的方法
private:
    void print_age();//这是私有的方法
}
void student::print_name(){
    cout << "Anarkenker";
}
void student::print_age(){
    cout << "18"
}