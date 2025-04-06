#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#include<vector>
#include<queue>
#include<unordered_map>
#include<unordered_set>
#include<map>
 
using namespace std;
typedef long long LL;
typedef pair<int,int> PII;
 
const int N=100010;
const int INF=0x3f3f3f3f;
const int MOD=1e9+7;
 
int bi[]={13,1,2,3,5,4,4,2,2,2};
int month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
 
int is_leap(int y){
    if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) return 1;
    return 0;
}
 
bool check(int x){
    int y=x/10000;
    int m=x%10000/100;
    int d=x%100;
    
    if(!m||m>12||!d) return false;
    if(m!=2&&d>month[m]) return false;
    if(m==2){
        if(d>month[m]+is_leap(y)) return false;
    }
    
    return true;
}

int main(){
    int ans=0;
    for(int i=20000101;i<=20240413;i++){
        if(check(i)){
            int t=i;
            int res=0;
            while(t){
                res+=bi[t%10];
                t/=10;
            }
            if(res>50){
                ans++; 
            }
        }
    }
    cout<<ans;
    return 0;
}