#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=1;
    for(int i=n;i>1;i--){
        sum++;
        sum*=2;
    }
    cout<<sum;
    return 0;
}