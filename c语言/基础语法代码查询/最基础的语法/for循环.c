#include <stdio.h>
int main()//求n！阶乘
{
    int n;
    scanf("%d",&n);
    int fact=1;
    int i;
    for (i=2;i<=n;i++)//第一个是初始条件，第二个是循环继续的条件，第三个是循环要干的事情结束后改变！！！与while循环等价for(;条件;)while(条件)
    {
        fact*= i;
        printf("%d\n",i);
    }
    printf("%d!=%d\n%d",n,fact,i);
    return 0;
}
/*循环小技巧
如果固定次数，用for
如果必须执行一次，用do_while
其他情况用while*/