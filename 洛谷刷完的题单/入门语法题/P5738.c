#include<stdio.h>

int max(int n[],int m);

int min(int a[],int m);

int main()
{
    
    float ans,m;
    int i,j,n,score[20],ave[100]={0},sum[100]={0};
    scanf("%d %f",&n,&m);
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j<m; j++)
        {
            scanf("%d",&score[j]);
           
        } 
        for ( j = 0; j <m; j++)
        {
            sum[i]+=score[j];
        }
        
        ave[i]=sum[i]-max(score,m)-min(score,m);
    }
    
    ans=max(ave,n)/(m-2);
    printf("%.2f",ans);
    return 0;
}

int max(int n[],int m)
{
    int i,max=0;
    for ( i = 0; i <m ; i++)
    {
        if (n[i]>max)
        {
            max=n[i];
        }
        
    }
    
    return max;
}

int min(int a[],int m)
{
    int i,min=10;
    for ( i =0;i<m; i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }
        
    }
    return min;
}