#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    int i;
    for(i=2;i<sqrt(n);i++){
        if(n%i==0){
            ans=i;
            break;
        }
    }
    cout<<(n/ans);
    return 0;
}