#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    int n,a[10001]={0},count=1,ans=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        if(a[i+1]-a[i]==1) count+=1;
        if(ans<count) ans=count;
        if(a[i+1]-a[i]!=1){
            count=1;
        }
    }
    cout<<ans;
    return 0;
}