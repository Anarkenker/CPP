#include<stdio.h>
int fib(int n)
{
    int a[n],ans;
    a[0]=1,a[1]=1;
    if (n<=2)
    {
        ans=1;
    }
    else
    {
        int i;
        for ( i = 2; i < n; i++)
        {
            a[i]=a[i-1]+a[i-2];
        }
        ans=a[n-1];
    }
    return ans;
}
int main()
{
    int n,ans;
    scanf("%d",&n);
    ans=fib(n);
    printf("%d",ans);
    return 0;
}