#include <stdio.h>
#include <math.h>
int main()
{
    double s,v;
    double t1;
    scanf("%lf %lf",&s,&v);
    t1=s/v;
    t1 += 10;
    printf("%f\n", t1);
    int t2, t;
    t = ceil(t1);//向上取整的原因就是当存在秒时，分钟应该少一
    printf("%d\n", t);
    t2=8 * 60;
    int time;
    int hour;
    int minute;
    time=t2 - t;
    //printf("%d\n",time);
    if (time<0)
    {
        time=t-t2;
        if (time%60!=0)
        {
            minute=60-time%60;
            hour=23-time/60;
        }
        else
        {
            minute=0;
            hour = 24 - time / 60;
        }
        if (minute >= 10)
        {
            if (hour < 0)
            {
                printf("0%d:%d", hour,minute);
            }
            else if(hour>=10)
            {
                printf("%d:%d",hour,minute);
            }
        }
        else
        {
            if(hour>=10)
            {
                printf("%d:0%d",hour,minute);
            }
            else if(hour<10)
            {
                printf("0%d:0%d",hour,minute);
            }
        }
    }
    else if(time>0)
    {
        time=t2-t;
        minute=time%60;
        hour=time/60;
        //printf("%d\n",time);
        if (minute>=10)
        {
            printf("0%d:%d",hour,minute);
        }
        else if (minute<10)
        {
            printf("0%d:0%d",hour,minute);
        }
    }
    else 
    {
        printf("00:00");
    }
    return 0;
}