#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int i=0;
    int A[100000];
    int B[100000];
    int j=0;
    int m=0;
    for ( i = 1; i <=n; i++)
    {
        if (i%k==0)
        {
           A[j]=i;
           j++; 
        }
        if (i%k!=0)
        {
            B[m]=i;
            m++;
        }
        
    }
    double ans1,ans2;
    int sum1=0;
    int sum2=0;
    for ( i = 0; i < j; i++)
    {
        sum1+=A[i];
    }
    for ( i = 0; i <m; i++)
    {
        sum2+=B[i];
    }
    ans1=sum1/(j*1.0);
    ans2=sum2/(m*1.0);
    printf("%.1lf %.1lf",ans1,ans2);
    return 0;
    
    
}