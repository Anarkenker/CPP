#include<stdio.h>

int main()
{
    int a=10;
    {
        int a=0;
        printf("%d\n",a);//本地变量

    }
    printf("%d",a);
    return 0;
}