#include<stdio.h>
void/*返回类型，函数头*/ sum/*函数名*/(int begin,int end)//参数表
{/*函数体*/
    int i;
    int sum=0;
    for ( i=begin; i <=end; i++)
    {
        /* code */sum+=1;
    }
    printf("%d到%d的和是%d\n",begin,end,sum);
}
int main()
{
    sum(100,2000);
    //这里的void是无返回值的函数头
    return 0;
}