#include<stdio.h>
int main()
{
    int stth;//起始时间小时
    int sttm;//起始时间分钟
    int enth;
    int entm;
    scanf("%d %d %d %d",&stth,&sttm,&enth,&entm);
    if(enth>60 ||stth>60)
    {
        return 0;
    }
    int t1=60*stth+sttm;
    int t2=60*enth+entm;
    int T=t2-t1;
    int h,m;
    h=T/60;
    m=T-h*60;
    printf("%d %d",h,m);
    return 0;
}