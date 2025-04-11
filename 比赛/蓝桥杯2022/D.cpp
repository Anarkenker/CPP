#include <bits/stdc++.h>
#define int long long

using namespace std;

const int mod = 998244353;

int n, pos = 0;
vector<pair<int, int>> a;
vector<int> c;

int MOD(int x, int y){
    return (x % mod) / y;
}

void dfs(int cnt, int per, int posi){
    if(cnt == n){
        pos++;
        return;
    }

    auto [x1, y1] = a[posi];
    int on = MOD(y1 - x1, y1);
    int down = MOD(x1, y1);
    
}

signed main(){
    cin >> n;

    for(int i= 0; i < n; i++){
        int x, y, z;
        scanf("%d %d", &x, &y);
        a.push_back({x, y});
        z = (x % mod) / y;
        c.push_back(z);
    }



}