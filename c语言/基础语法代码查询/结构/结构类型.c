#include<stdio.h>
struct date
{
    int month;
    int day;
    int year;
}today;

int main(int argc,char const*argv[])
{
    //struct date today;
    today.month=07;
    today.day=31;
    today.year=2014;//结构和数组有点像
    //结构体用.对结构中的成员进行访问
    printf("%i-%i-%i.\n",
    today.year,today.month,today.day);
    return 0;
}