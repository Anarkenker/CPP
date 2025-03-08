#include <stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int i;
    int isprime=1;
    for ( i = 2; i <x; i++)
    {
        printf("%d\n",i);
        
        if (x%i==0)
        {
            isprime=0;
            break;//在switch case里遇到过 break跳出循环 continue跳过循环这一轮剩下的语句进入下一轮
        }
        
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