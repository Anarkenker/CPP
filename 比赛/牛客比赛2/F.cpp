#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        long long l,r;
        cin>>l>>r;
        long long ans=r-l+1;
        cout<<ans<<endl;
    }
    return 0;
}