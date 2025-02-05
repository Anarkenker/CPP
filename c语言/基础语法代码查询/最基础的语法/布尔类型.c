#include<stdio.h>
#include<stdbool.h>
int main()
{
    bool b=6>5;
    bool t=true;
    t=2;
    printf("%d\n",b);//无法用printf输出true or false
    return 0;
}