#include<iostream>
#include<cstdio>
using namespace std;
int n,a[10010],ans;//a存高度，ans记答案；
int main(void)
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i-1]>a[i]){
            while(a[i]>=a[i+1]&&i<n-1){
                i++;
            }
            if(i!=n-1) ans++;
        }
    }
    cout<<ans;
    return 0;
}