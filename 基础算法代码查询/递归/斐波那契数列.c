//f(n)=f(n-1)+f(n-2);
#include<stdio.h>
int fib (int n)
{
    int ans;
    if (n<=2)
    {
        ans=1;
    }
    else
    {
        ans=fib(n-1)+fib(n-2);
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
//用数列也可以吧？