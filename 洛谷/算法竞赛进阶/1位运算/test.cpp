#include<iostream>
#include<cstdio>
using namespace std;
long long mul(long long a, long long b, long long p)
{
    long long ans = 0;
    while(b > 0){
        if(b & 1){
            ans = (ans + a) % p;
        }
        a = a * 2 % p;
        b >>= 1;
    }
    return ans;
}
int main()
{
    
}