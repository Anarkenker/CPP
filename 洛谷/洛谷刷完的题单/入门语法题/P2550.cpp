#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    int a[1000][7]={0},jiang[7],sum[8]={0};
    cin>>n;
    for(int i=0;i<7;i++){
        cin>>jiang[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<7;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<7;j++){
            for(int k=0;k<7;k++){
                if(a[i][j]==jiang[k]){
                    count++;
                }
            }
        }
            sum[count]++;
    }
    for(int i=7;i>=1;i--){
        cout<<sum[i]<<" ";
    }
    return 0;
}