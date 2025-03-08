#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int d[20000000];
int main()
{
    int n,t;
    double a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>t;
        for(int j=1;j<=t;j++){
            d[(int)floor(a*j)]++;
            //cout<<(int)floor(a*j)<<"hhhh"<<endl;
        }
    }
    int ans=0;
    for(int i=1;i<20000000;i++){
        if(d[i]%2!=0){
            //cout<<i<<endl;
            ans=i;
        }
    }
    cout<<ans;
    return 0;
}