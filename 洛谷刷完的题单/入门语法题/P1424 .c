#include<stdio.h>
int main()
{
    int n,x;
    scanf("%d %d",&n,&x);
    int week=x/7;
    int day=x%7;
    long long int s;
    
    n=n-1;
    
    if ((day+n)<=5)
    {
        s=day*250+week*(5*250);
    }
    if (n<5&&n+day>5)
    {
        int cha=(n+day)-5;
        
        s=week*(5*250)+(day-cha)*250;
        
    }
    
    if (n>=5)
    {
        int cha=7-n;
        if(day>=2) day-=cha;
        if(day==1) 
        {
            if(n==7) day=1;
            if(n==6) day=0;
            if(n==5) day=0;
        }

        s=day*250+week*(5*250);
    }
    printf("%ld",s);
    return 0;
    
}
/*
#include<stdio.h>
int main()
{
   int x;
   long long int n,i,sum=0;
   scanf("%d%lld",&x,&n);//输入星期和 天数
   for(i=1;i<=n;i++)
   {
        switch(x)//对星期依次判断
        {
           case 1:case 2:case 3:case 4:case 5:sum+=250;
           case 6: x++;continue;//周六不进行 进行下一循环
           case 7:x=1;continue;//周日清零为星期一 并进行下一循环
        }
      x++;//工作日情况下 进入下一日
  }
  printf("%lld\n",sum);//输出公里数
  return 0;
}*/