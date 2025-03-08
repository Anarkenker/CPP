#include<iostream>
#include<cstdio>
#include<algorithm>
#include<utility>
#include<limits>
using namespace std;
pair<int,int>a[10001];
int main()
{
    int x,y,d1,d2,x1,y1,n,x2,y2;
    cin>>n>>x1>>y1>>x2>>y2;
    for(int i=1;i<=n;i++){
        cin>>x>>y;
        d1=(x-x1)*(x-x1)+(y-y1)*(y-y1);
        d2=(x-x2)*(x-x2)+(y-y2)*(y-y2);
        a[i]=make_pair(d1,d2);
    }
    sort(a+1,a+1+n);
    int r1,r2=0,ans=INT16_MAX;
    for(int i=n;i>=0;i--){
        if(i==0)
            r1=0;
        else
            r1=a[i].first;
        if(i==n)
            r2=0;
        else
            r2=max(r2,a[i+1].second);
        ans=min(ans,r1+r2);
    }
    cout<<ans<<endl;
    return 0;
}