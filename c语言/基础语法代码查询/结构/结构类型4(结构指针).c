#include<stdio.h>

struct date
{
    int month;
    int day;
    int year;
}today,day;

int main(void)
{

    today =(struct date){07,31,2024};
    day =(struct date){08,31,2016};
    struct date *pDate =&today
    {
        /* data */
    };
    
    /*today.month=07;
    today.day=31;
    today.year=2014;*///结构和数组有点像
    //结构体用.对结构中的成员进行访问
    printf("%i-%i-%i.\n",today.year,today.month,today.day);
    return 0;
}