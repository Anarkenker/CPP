class student{
public:
    bool set(int a);
    bool set(string a);
    bool read) const;
    student();
    student(int a, string b);
private:
    int age;
    string name;
}
//我们一般把方法放在public里，把属性放在private中
//目的是防止类的外部随便篡改数据
//通过函数来修改数据时，一般都有放错措施，满足了条件才可以让你放