#include<bits/stdc++.h>
#define int double

using namespace std;
int n, a[420][420];//我们把200，200当作0， 0用也就是原本的数加200
int vis[420][420];
void bfs(){
    int sx = 200, sy = 200;
    queue<pair<int, int>> q;
    q.push({sx, sy});
    
    while(!q.empty()){
        auto [px, py] = q.front();
        q.pop();
        for(int i = 0; i < )
    }
}

signed main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        long x, y;
        cin >> x >> y;
        a[x + 200][y + 200] = 1;
    }
    
}