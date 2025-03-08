#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int x,c,k;
    cin>>x>>c>>k;
    for(int i=0;i<k-1;i++){
        x=(x*x+c)%10000;
    }
    cout<<x;
    return 0;
}