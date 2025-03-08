#include<iostream>
#include<cstdio>
using namespace std;
int a[10];
int main()
{
    int M,N;
    cin>>M>>N;
    for(int i=M;i<=N;i++){
        for(int tem=i;tem;tem/=10){
            a[tem%10]++;
        }
    }
    for(int i=0;i<10;i++){
        cout<<a[i]<<' ';
    }
    return 0;
}