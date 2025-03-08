#include<iostream>
#include<cstdio>
using namespace std;
int max(int a[])
{
    int max=0;
    for(int i=0;i<1001;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;
}
int min(int a[],int n)
{
    int min=10;
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    return min;
}
int main()
{
    int n,pw[1001]={0};
    double ans,sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>pw[i];
        sum+=pw[i];
    }
    sum-=max(pw)+min(pw,n);
    ans=sum/(n-2)*1.0;
    printf("%.2lf",ans);
    return 0;
}