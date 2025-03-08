#include<stdio.h>
#include<math.h>
int main()
{
    double r,h;
    scanf("%lf %lf",&h,&r);
    double V;
    double s;
    s=(pow(r,2.0)*3.14);
    //printf("%lf\n",s);
    V=s*h;
    double Vx=20000;
    int cnt;
    cnt=ceil(Vx/V);
    printf("%d",cnt);
    return 0;
    
}