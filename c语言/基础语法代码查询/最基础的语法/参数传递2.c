#include<stdio.h>
void swap(int a,int b);//形参

int main()
{
    int a;
    int b;
    scanf("%d %d",&a,&b);//这里的a和b是实参（调用函数时给的值叫做实际参数）
    swap(a,b);
    printf("a=%d ,b=%d",a,b);
    return 0;
}

void swap(int a,int b)//这里已经定义过了下面就不用再次定义一遍a，b了 这里的a和b是形参
{
    int t=a;
    a=b;
    b=t;
}