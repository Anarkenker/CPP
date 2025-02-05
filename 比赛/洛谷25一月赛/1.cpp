#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int gewei=a%10,ans;
    ans=b-gewei;
    if(ans<0){
        ans+=10;
    }
    cout<<ans;
    return 0;
}