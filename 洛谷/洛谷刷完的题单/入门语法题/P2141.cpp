#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    int n,a[101]={0},count=0,f[101]={0};
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //sort(a,a+n);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            int ans=a[i]+a[j];
            for(int k=0;k<n;k++){
                if(ans==a[k]&&k!=i&&k!=j&&f[k]!=1){
                    count++;
                    f[k]=1;
                }
            }
        }
    }
    cout<<count;
    return 0;
}