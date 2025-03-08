#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long long n[30]={0};
    long long i=0,sum=0;
    while(cin>>n[i]){
        sum+=n[i];
        i++;
    }
    //cout<<sum<<endl;
    long long tsum=sum*pow(2,i-1);
    cout<<tsum;
    return 0;
}