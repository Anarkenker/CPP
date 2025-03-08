#include<iostream>
#include<cstdio>
using namespace std;
int a[100000],ans;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<a[i-1]){
            while(a[i]<a[i+1]&&i<n-1){
                i++;
            }
            if(i!=n-1) ans++;
        }
    }

    cout<<ans;
    return 0;
}