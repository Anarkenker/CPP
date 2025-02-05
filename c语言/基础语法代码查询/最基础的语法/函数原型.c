#include<stdio.h>

void/*返回类型，函数头*/ sum/*函数名*/(int begin,int end);//声明

int main()
{//如果调用的函数有参数，需要在括号里添加数据
    sum(1,10);
    sum(20,30);
    sum(100,1000);
    return 0;
}
void/*返回类型，函数头*/ sum/*函数名*/(int begin,int end)//定义
{
    int i;
    int sum=0;
    for ( i=begin; i <=end; i++)
    {
        /* code */sum+=1;
    }
    printf("%d到%d的和是%d\n",begin,end,sum);
}