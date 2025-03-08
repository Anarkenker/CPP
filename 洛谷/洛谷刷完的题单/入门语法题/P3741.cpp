#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
using namespace std;
const int maxn=110;
int n,ans;
char s[maxn];
bool tf,f[maxn];
int main()
{
    cin>>n>>s;
    for(int i=1;i<n;i++)if(s[i-1]=='V'&&s[i]=='K')ans++,f[i-1]=f[i]=true;
    for(int i=1;i<n;i++)if(!tf&&!f[i-1]&&!f[i]&&s[i-1]==s[i])tf=true,ans++;
    cout<<ans<<endl;
    return 0;
}