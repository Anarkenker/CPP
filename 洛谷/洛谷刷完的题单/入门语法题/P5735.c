#include<stdio.h>
#include<math.h>

struct zuobiao
{
    double x;
    double y;
}d1,d2,d3;

double dis(struct zuobiao d, struct zuobiao c);

int main()
{
    scanf("%lf %lf %lf %lf %lf %lf",&d1.x,&d1.y,&d2.x,&d2.y,&d3.x,&d3.y);
    
    double ci;
    ci=dis(d1,d2)+dis(d2,d3)+dis(d3,d1);

    printf("%.2lf\n",ci);

    return 0;
}

double dis(struct zuobiao d, struct zuobiao c)
{
    double dis=sqrt(pow((c.x-d.x),2)+pow((c.y-d.y),2));
    return dis;

}