#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i;
    int isprime=1;
    for ( i = 2; i <x; i++)
    {
        
        
        if (x%i==0)
        {
            isprime=0;
            continue;//在switch case里遇到过 break跳出循环 continue跳过循环这一轮剩下的语句进入下一轮
        }
        printf("%d\n",i);/*这里3就被跳过了哈哈*/
    }
    if (isprime==1)
    {
        printf("是素数\n");
    }
    else
    {
        printf("不是素数\n");
    }
    return 0;
}