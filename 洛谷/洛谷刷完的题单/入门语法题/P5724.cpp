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
int min(int a[],int n)
{
    int min=1001;
    for(int i=0;i<n;i++){
        if(min>a[i]) min=a[i];
    }
    return min;
}
int main()
{
    int n,a[101];
    cin>>n;
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int max1=max(a,n),min1=min(a,n),ans=0;
    ans=max1-min1;
    cout<<ans;//<<endl<<max1<<endl<<min1;
    return 0;
}