#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c;
    double p,s,m;
    scanf("%f %f %f",&a,&b,&c);
    float d=a+b+c;
    //printf("%f\n",d);
    p=d/2;
    //printf("%f\n",p);
    s=p*(p-a)*(p-b)*(p-c);
    //printf("%f",s);
    m=sqrt(s);
    printf("%.1lf",m);
    return 0;
}
