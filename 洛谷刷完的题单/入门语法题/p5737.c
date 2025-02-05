#include<stdio.h>
#include<stdlib.h>

struct qujian
{
    int x;
    int y;
}one;

int runnian(int x,int y);

void juti(int x,int y,int *ans2);

int main()
{
    int *ans2;
    scanf("%d %d",&one.x,&one.y);
    int ans1=runnian(one.x,one.y);
    ans2=(int*)malloc(ans1*sizeof(int));
    juti(one.x,one.y,ans2);
    printf("%d\n",ans1);
    int i;
    for ( i = 0; i<ans1; i++)
    {
        printf("%d ",ans2[i]);
    }
    return 0;
}
int runnian(int x,int y)
{
    int i=0;
    int ans=0;
    for ( i = x; i <=y; i++)
    {
        if ((i%4==0&&i%100!=0)||i%400==0)
        {
            
            ans++;
        }
        
    }
    return ans;
}
void juti(int x,int y,int *ans2)
{
    int i=0;
    int ans=0;
    for ( i = x; i <=y; i++)
    {
        if (i%4==0 && i%100!=0||i%400==0)
        {
            ans2[ans]=i;
            ans++;
        }
        
    }
    
}