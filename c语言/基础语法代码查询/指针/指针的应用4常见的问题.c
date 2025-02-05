#include<stdio.h>
void f(int *p);
void g(int k);

int main(void)
{
    int i=6;
    int *p=0;//int *p=后面跟着是一个地址不是一个数
    int k=12;
    *p=12;//此时这个地址无法被编写进任何数字，所以导致程序的崩溃。
    printf("&i=%p\n",&i);
    f(&i);
    g(i);
    return 0;
}
void f(int *p)
{
    printf("p=%p\n",p);
    printf("*p=%d\n",*p);//*p相当于i的
    *p=26;
}
void g(int k)
{
    printf("k=%d\n",k);
}