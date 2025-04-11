#include <bits/stdc++.h>

using namespace std;

int f, m, n, today = 5;
int ans = 0;

void dfs(int today, int cnt){
    if(today == 4){
        ans++;
    }

    if(cnt == n){
        return;
    }

    if(today == 7){
        dfs(1, cnt + 1);
    }
    else{
        dfs(today + 1, cnt + 1);
    }
}

int main(){
    cin >> f >> m >> n;
    dfs(5, 1);
    cout << ans * (2 * f + m);
    return 0; 
}