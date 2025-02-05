#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int power(int a,int b,int p)
{
    int ans = 1;
    while(b>0){
        if(b & 1) ans = (long long)ans * a % p;
        a = (long long)a * a % p;
        b>>=1;
    }
    return ans;
}
int main()
{
    int a,b,p;
    cin>>a>>b>>p;
    cout<<a<<"^"<<b<<" mod "<<p<<"="<<power(a,b,p);
    return 0;
}