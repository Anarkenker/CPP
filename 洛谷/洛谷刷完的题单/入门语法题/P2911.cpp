#include<iostream>
#include<stdio.h>
using namespace std;
int s1,s2,s3;
int sum[10000];
int max(int a[])
{
    int max=0,ans=0;
    for(int i=0;i<100;i++){
        if(a[i]>max){
            max=a[i];
            ans=i;
        }
    }
    return ans;
}
int main()
{
    cin>>s1>>s2>>s3;
    for(int i=1;i<=s1;i++){
        for(int j=1;j<=s2;j++){
            for(int k=1;k<=s3;k++){
                sum[i+j+k]++;
            }
        }
    }
    cout<<max(sum);
    return 0;
}