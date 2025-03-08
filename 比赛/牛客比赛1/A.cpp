#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
bool isprime(int n)
{
    if(n==1||n==2) return true;
    if(n>2){
        for(int i=2;i*i<n;i++){
            if(n%2==0){
                return false;
            }
        }
    }
    return true;
}
int main()
{
    long long n;
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        cin>>n;
        vector<int>a(n);
        for(int m=0;m<n;m++){
            cin>>a[m];
        }
        long long x=10000000000000007;
        int try1=1;
        for( long long i=1;;i++){
            int judge=1;
            for(int k=0;k<n;k++){
                if(x%a[k]==0||a[k]%x==0){
                    judge=0;
                    break;
                }
            }
            if(judge==1){
                cout<<x<<endl;
                break;
            }
            x+=2;
            while(!isprime(x)){
                x+=2;
            }
            try1++;
            if(try1>100){
                cout<<"-1"<<endl;
                break;
            }
        }
    }
    return 0;
}