#include<iostream>
#include<cstdio>
using namespace std;
int max(int a[],int n)
{
    int max=0;
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    return max;
}
int main()
{
    int n,k,sum=0,ns,i,x[101]={0},k1[101]={0};
    cin>>n;
    ns=n/52;
    for(i=1;i<=100;i++){//(21*k+7x)*52==n;
        int count=i;
        for(k=1;k<1000;k++){
            for(int j=0;j<7;j++){
                sum+=(i+j*k);
            }
            if(sum==ns){
                x[count]=i;
                k1[count]=k;
            }
            sum=0;
        }
    }
    i=max(x,101);
    k=k1[i];
    cout<<i<<endl<<k;
    return 0;
}