#include<stdio.h>
#include<stdbool.h>
struct date 
{
    int month;
    int day;
    int year;
};

int numberofdays(struct date d);

int main()
{
    struct date today,tomorrow;
    printf("Please enter today's date\n");
    scanf("%d %d %d",&today.year,&today.month,&today.day);
    if (today.day!=numberofdays(today))
    {
        tomorrow.year=today.year;
        tomorrow.month=today.month;
        tomorrow.day=today.day+1;
    }
    else if(today.day ==numberofdays(today)&&today.month!=12)
    {
        tomorrow.day=1;
        tomorrow.month=today.month+1;
        tomorrow.year=today.year;
    }
    else
    {
        tomorrow.day=1;
        tomorrow.month=1;
        tomorrow.year=today.year+1;
    }
    printf("Tomorrow's date:%i-%i-%i\nRemember always be positive!",tomorrow.year,tomorrow.month,tomorrow.day);
}
int numberofdays(struct date d)
{
    int days;
    const int dpm[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if (d.month!=2)
    {
        days=dpm[d.month-1];
    }
    else if (d.month==2)
    {
        if ((d.year%4==0&&d.year%100!=0)||d.year%400==0)
        {
            days=29;
        }
        else
        {
            days=28;
        }
    }
    return days;
    
}
