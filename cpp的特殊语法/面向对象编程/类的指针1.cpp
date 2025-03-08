//真正的多态必须学会指针
//实际程序，大量使用类指针
//不考虑继承， 类指针与结构体指针类似
/*student *p;
student aa;
p = &aa;
p -> name;
p -> study();*/
//实际程序中使用更高级的写法 student *p = new student(20, '张三')；
//delete p;//调用析构函数