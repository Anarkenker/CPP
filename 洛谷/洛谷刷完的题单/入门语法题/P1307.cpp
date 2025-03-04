#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    for(int i=0;;i++){
        ans=ans*10+n%10;
        n/=10;
        if(n==0){
            break;
        }
    }
    cout<<ans;
    return 0;
}