#include<stdio.h>//inf 代表的是无穷大，nan代表的是不存在
int main()
{
    float a=0.0f;//后面要带f才能证明它是float而不是double
    float b=12.0f;
    float c;
    c=b/a;
    printf("%f",c);
    return 0;
}