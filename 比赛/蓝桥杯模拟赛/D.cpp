#include <bits/stdc++.h>

using namespace std;

const int mod = 998244853;
const int N = 1e4;

int n, m;
int vis[N];
int a[N], b[N];
int ans;

void dfs(int pos, int cnt, double per){
    per *= (mod / b[pos]);
    if(cnt % m == 0){
        
        return;
    }
}

int main(){
    cin >> n >> m;

    for(int i= 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n; i++){
        cin >> b[i];
    }

    for(int i = 0; i < n; i++){
        vis[N]++;
        dfs(i, a[i], b[i]);
        vis[N]--;
    }
}