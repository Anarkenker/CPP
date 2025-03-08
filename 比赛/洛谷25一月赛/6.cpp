#include<iostream>
#include<cstdio>
using namespace std;
int max3(int a[],int n)
{
    int max=0,ans;
    for(int i=1;i<=n;i++){
        if(a[i]>=max){
            max=a[i];
            ans=i;
        }
    }
    return ans;
}
int main()
{

    int n,m,a[60][60]={0};
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
        int sum[60]={0};
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                sum[i]+=a[j][i];
            }
        }
        int ans1=max3(sum,m);
        int max1=0,ans2=0;
        for(int i=1;i<=n;i++){
            if(a[i][ans1]>max1){
                max1=a[i][ans1];
            }
        }
        for(int i=1;i<=n;i++){
            if(a[i][ans1]==max1){
                ans2++;
            }
        }
        cout<<max1<<" "<<ans2;
        return 0;
}