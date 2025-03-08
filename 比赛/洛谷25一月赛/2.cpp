#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int weizhi(int a)
{
    int ans;
    if(a%2==0){
        ans=a/2;
    }
    else{
        ans=-(a-1)/2;
    }
    return ans;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int ans=abs(weizhi(a)-weizhi(b));
    if(a%2==0 &&b%2==0||a%2!=0&&b%2!=0){
        ans=abs(weizhi(a)-weizhi(b))-1;
    }
    cout<<ans;
    return 0;
}