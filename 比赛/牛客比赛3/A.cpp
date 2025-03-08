#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(n % 2 == 0){
        cout<<"No";
        return 0;
    }
    if(n % 2 != 0){
        cout<<"Yes";
        return 0;
    }
    return 0;
}