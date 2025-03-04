#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,a[30001]={0},sum[30001]={0};
    cin>>n>>m;
    if(n==0){
        cout<<'0';
        return 0;
    }
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<=n-m;i++){
        for(int j=i;j<i+m;j++){
            sum[i]+=a[j];
        }
    }
    sort(sum,sum+n-m);
    cout<<sum[0];
    return 0;
}