#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
long long feb1(int n)
{
    long long ans=0;
    long long a=1,b=1;
    if(n==1||n==2) ans=1;
    for(int i=3;i<=n;i++){
        ans=a+b;
        a=b;
        b=ans;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    long long feb;
    feb=feb1(n);
    cout<<feb<<".00";
    return 0;
}