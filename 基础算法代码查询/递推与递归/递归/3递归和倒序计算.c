//二进制表示法是根据2的幂数来表示数字，
//本程序的目的在于将二进制转化为十进制整数。
//一下程序展示了该算法。
#include<stdio.h>
void to_binary(unsigned long n)//可以储存一个比较大的非负整数。//本函数为递归函数
{
    int r;
    r=n%2;
    if (n>=2)
    {
        to_binary(n/2);        
    }
    putchar(r==0?'0':'1');
}

int main()
{
    unsigned long number;
    printf("Enter an integer(q to quit):\n");
    while (scanf("%lu",&number)==1)
    {
        printf("Binary equivalent:");
        to_binary(number);
        putchar('\n');
        printf("Enter an integer(q to quit);\n");
    }
    printf("Done.\n");
    return 0;
}