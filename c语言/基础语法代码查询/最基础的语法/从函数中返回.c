#include<stdio.h>
int max(int a,int b)
{
    int ret;
    if (a>b)
    {
        ret=a;
    }
    if (a<b)
    {
        /* code */ret=b;
    }
    return ret;
}
int main()
{
    int a,b,c;
    a=5;b=6;
    c=max(10,12);
    printf("%d\n",c);
    c=max(a,b);
    c=max(c,23);
    printf("%d\n",c);
    return 0;
}
/*可以这样写
if(a>b)
{
    return a;
}
if(a<b)
{
    return b;
}
但是*/