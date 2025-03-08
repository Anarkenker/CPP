#include<iostream>
#include<cstdio>
using namespace std;
int a[20][20];
int main()
{
    int n;
    cin>>n;
    a[1][1]=a[2][1]=a[2][2]=1;
    for(int i=3;i<=n;i++){
        for(int j=1;j<=i;j++){
            a[i][j]=a[i-1][j]+a[i-1][j-1];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}