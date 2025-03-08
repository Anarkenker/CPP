#include<stdio.h>

int main()
{
    int t[7];
    int k[7];

    int i;
    int sum[7];
    int max=0;
    int ans=0;

    for ( i = 0; i < 7; i++)
    {
        scanf("%d %d",&t[i],&k[i]);

        sum[i]=t[i]+k[i];
        if (sum[i]>8&&sum[i]>max)
        {
            max=sum[i];
            ans=i+1;
        }
    }
    printf("%d",ans);

    return 0;
}