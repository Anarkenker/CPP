#include<iostream>
#include<cstdio>
#include<vector>
#define int long long
using namespace std;
const int mod = 1e9 + 7;
vector<int> len, side;
int ans = 0, n;
void dfs(int cnt, int tnum, vector<int> &side){
    if(cnt == 4){
        if(side[0] + side[1] == side[2] + side[3]||
            side[0] + side[2] == side[1] + side[3]||
            side[0] + side[3] == side[1] + side[2]
        ){
            ans = (ans + 1) % mod;
        }
        return;
    }
    else if(tnum >= len.size()){
        return;
    }
    side.push_back(len[tnum]);
    dfs(cnt + 1, tnum + 1, side);
    side.pop_back();
    dfs(cnt, tnum + 1, side);
}
signed main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        int t;
        cin >> t;
        len.push_back(t);
    }
    dfs(0, 0, side);
    cout << ans;
    return 0;
}