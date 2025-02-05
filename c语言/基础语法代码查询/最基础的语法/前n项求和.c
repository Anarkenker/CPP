#include<stdio.h>
int main()//f(x)=1-1/2+1/3-1/4.....前n项求和
{
    int n;
    int i;
    double sum=0.0;
    float sign=1;
    scanf("%d",&n);
    for ( i =1; i <=n; i++)
    {
        /* code */sum+=sign/i;
        sign = -sign;
        printf("%f\n",sum);
    }
    printf("f(%d)=%f",n,sum);
    return 0;
}