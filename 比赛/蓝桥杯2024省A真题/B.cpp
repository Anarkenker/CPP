#include<bits/stdc++.h>
using namespace std;
const int N=5;
int dp[N][N];//存储棋盘状态1白2黑
int ans;//计方案数
bool check()//检查是否为平局
{
    for(int i=0;i<N;i++)//检查行
    {
        if(dp[i][0]==-1)continue;
        bool ok=true;
        for(int j=1;j<N;j++)
            if(dp[i][j]!=dp[i][0])
            {
                ok=false;
                break;
            }
        if(ok)return true;
    }
    for(int j=0;j<N;j++)//检查列
    {
        if(dp[0][j]==-1)continue;
        bool ok=true;
        for(int i=1;i<N;i++)
            if(dp[i][j]!=dp[0][j])
            {
                ok=false;
                break;
            }
        if(ok)return true;
    }
    if(dp[0][0]!=-1)//检查主对角线
    {
        bool ok=true;
        for(int i=1;i<N;i++)
            if(dp[i][i]!=dp[0][0])
            {
                ok=false;
                break;
            }
        if(ok)return true;
    }
    if(dp[0][N-1]!=-1)//检查副对角线
    {
        bool ok=true;
        for(int i=1;i<N;i++)
            if(dp[i][N-1-i]!=dp[0][N-1])
            {
                ok=false;
                break;
            }
        if(ok)return true;
    }
    return false;
}
void dfs(int x,int y)//dfs
{
    if(check())return;//检查成功是平局return
    if(x==N)
    {
        int sum=0;
        for(int i=0;i<N;i++)
            for(int j=0;j<N;j++)
                if(dp[i][j]==1)sum+=dp[i][j];
        if(sum==13)ans++;//一共25个格子，白的13够了
        return;
    }
    int dx=x,dy=y;
    if(y+1<N)dy++;else dy=0,dx++;
    dp[x][y]=1;//放白棋
    dfs(dx,dy);
    dp[x][y]=2;//放黑棋
    dfs(dx,dy);
    dp[x][y]=-1;//回溯
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    memset(dp,-1,sizeof(dp));//初始化设为-1；
    dfs(0,0);
    cout<<ans;
    return 0;
}
