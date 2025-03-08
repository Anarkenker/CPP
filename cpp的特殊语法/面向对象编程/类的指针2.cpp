/*int main(){
    student *p1;
    postgraduate *p2;
    student aa;
    postgraduate bb;
    p1 = &aa;
    p2 = &bb;
    p1 = &bb;
    p2 = &aa;//这里报错
}
//虽然父类的指针可以指向子类成员，但父类的指针不能调用子类的属性和方法*/\
//但如果用方法是virtual那么就可以调用