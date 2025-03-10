#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    int s,i;
    cin>>n>>s;
    while(s){
        for(i=0;n[i]<=n[i+1];){//找高峰期
            i++;
        }
        n.erase(i,1);//删除函数,就是从第i个位置连续删1个。如果不清楚删除函数，可以百度。
        s--;
    }
    while(n[0]=='0'&&n.size()>1){//处理前导零，注意如果长度是1就不能再删了。
    	n.erase(0,1);
	}
    cout<<n;
    return 0;
}