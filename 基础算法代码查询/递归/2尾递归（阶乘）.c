#include<stdio.h>
//尾递归就是将函数置于函数的返回值前，这是最简单的递归方式（tail recursion）。
//零的阶乘是1，很神奇吧。
//factorial阶乘。
long fact(int n)//第一个函数使用循环计算阶乘
{
    long ans;
    for (ans = 1 ;n>1; n--)
    {
        ans *=n;
    }
    return ans;
}

long rfact(int n)//第二个函数使用递归计算阶乘
{
    long ans;
    if (n>0)
    {
        ans =n*rfact(n-1);//阶乘的特殊性质，n！=n*(n-1)!，也就是rfact（n）=n*rfact（n-1）
    }
    else//当然，必须要在满足条件的情况下结束递归，可以令返回值为1；
    {
        ans=1;
    }
    return ans;
}
int main()
{
    int num;
    printf("This program calculates factorials.\n");
    printf("Enter a value in the range 0-12(q to quit):\n");
    while(scanf("%d",&num)==1)
    {
        if (num<0)
        {
            printf("No negative numbers,please.\n");   
        }
        else if (num>12)
        {
            printf("Keep input under 13.\n");
        }
        else
        {
            printf("loop:%d factorial=%ld\n",num,fact(num));
            printf("recursion:%d factorial=%ld\n",num,rfact(num));
        }
        printf("Enter a value in the range 0-12(q to quit):");
    }
    printf("Bye.\n");
    return 0;
}