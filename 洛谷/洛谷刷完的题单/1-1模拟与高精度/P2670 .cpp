#include<iostream>
#include<cstdio>
using namespace std;
int an[101][101];
int main()
{
    int n,m; 
    cin>>n>>m;
    char ans[101][101];
    char a[101][101];
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            ans[i][j]='0';
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]=='*'){
                if(i-1>=1){
                    if(j-1>=1&&a[i-1][j-1]!='*'){
                        an[i-1][j-1]++;
                    }
                    if(j+1<=m&&a[i-1][j+1]!='*'){
                        an[i-1][j+1]++;
                    }
                    if(a[i-1][j]!='*'){
                        an[i-1][j]++;
                    }
                }
                if(i+1<=n){
                    if(j-1>=1&&a[i+1][j-1]!='*'){
                        an[i+1][j-1]++;
                    }
                    if(j+1<=m&&a[i+1][j+1]!='*'){
                        an[i+1][j+1]++;
                    }
                    if(a[i+1][j]!='*'){
                        an[i+1][j]++;
                    }
                }
                if(j-1>=1&&a[i][j-1]!='*'){
                    an[i][j-1]++;
                }
                if(j+1<=m&&a[i][j+1]!='*'){
                    an[i][j+1]++;
                }
                ans[i][j]='*';
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            ans[i][j]+=an[i][j];
            cout<<ans[i][j];
        }
        cout<<endl;
    }
    return 0;
}