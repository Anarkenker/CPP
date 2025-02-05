#include<stdio.h>
//枚举是一种用户定义的数据类型，它用关键字enum以如下语法来声明
//enum 枚举类型名字{名字0，...，名字n}；
enum COLOR { red,yellow,green};//red是0yellow是1.....枚举的量是递增的

void f(enum COLOR c);
int main(void)
{
    enum COLOR t=red;
    scanf("%d",&t);
    f(t);
    return 0;
}
void f(enum COLOR c)
{
    printf("%d\n",c);
}