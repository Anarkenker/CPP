#include<stdio.h>
int main()
{

    double ue;
    scanf("%lf",&ue);
    double sum=0;
    if (ue<=150.0)
    {
        sum=ue*0.4463;
    
    }
    if (ue<=400&&ue>150)
    {
        sum=150*0.4463+(ue-150)*0.4663;
        //printf("%lf\n",sum);
    }
    if (ue>400)
    {
        sum=150*0.4463+250*0.4663+(ue-400)*0.5663;
    }
    printf("%.1lf",sum);
    return 0;
    
}