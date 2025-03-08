#include<iostream>
#include<cstdio>
using namespace std;
long long power(int a, int b, int p)
{
    long long ans = 1;
    while(b>0){
        if(b & 1){
            ans = ans * a % p;
        }
        a = (long long) a * a % p;
        b >>= 1;
    }
    return ans;
}
int main()
{
    int a,b,p;
    cin >> a >> b >> p;
    long long ans = power(a, b, p);
    cout<<a<<"^"<<b<<" mod "<<p<<"="<<ans;
    return 0;
}