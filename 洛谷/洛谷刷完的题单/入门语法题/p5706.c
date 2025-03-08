#include<stdio.h>
int main()
{
    float t;
    int n;
    float fcount;
    int b;
    scanf("%f %d",&t,&n);
    fcount=t/n;
    b=n*2;
    printf("%.3f\n%d\n",fcount,b);
    return 0;
}   