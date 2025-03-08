#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[500000]={0};
    for(int i = 0;i < n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int cnt=0,half=0;
    if(n%2!=0&&n!=1){
        half=(n-1)/2;
    }
    if(n%2==0){
        half=(n)/2;
    }
    if(n==1){
        cout<<a[0]-1;
        return 0;
    }
    for(int i=0;i<n;i++){
        if(a[i]==0){
            continue;
        }
        cnt++;
        if(cnt==half){
            int ans=a[i];
            while(ans<a[i+1]-1) ans++;
            if(a[i]==a[i+1]) ans--;
            cout<<ans;
            break;
        }
    }
    return 0;
}