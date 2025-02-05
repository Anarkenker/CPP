#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstdlib>
using namespace std;
long long fp(long long b,long long e)
{
    long long ans=1;
    while(e>0){
        if(e&1){
            ans*=b;
        }
        b*=b;
        e>>=1;
    }
    return ans;
}
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        long long n,m;
        cin>>n>>m;
        int cnt=1;
        long long min=n-fp(m,1);
        for(int j=2;;j++){
            bool flag = false;
            long long ch=abs(n-fp(m,j));
            if(ch<min){
                min=ch;
                cnt++;
                flag=true;
            }
            if(!flag){
                break;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}