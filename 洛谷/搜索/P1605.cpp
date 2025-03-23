#include<bits/stdc++.h>

using namespace std;

int n, m, t;
int sx, sy, fx, fy;
int cunx[] = {0, 0, -1, 1}, cuny[] = {1, -1, 0, 0};
int vis[20][20], b[20][20];
int ans = 0;

void dfs(int nx, int ny) {
    if (nx == fx && ny == fy) {
        ans++;
        return;
    }

    for (int i = 0; i < 4; i++) {
        int newX = nx + cunx[i];
        int newY = ny + cuny[i];
        if (newX >= 1 && newY >= 1 && newX <= n && newY <= m && !vis[newX][newY] && !b[newX][newY]) {
            vis[newX][newY] = 1;
            dfs(newX, newY);
            vis[newX][newY] = 0;
        }
    }
}

int main() {
    cin >> n >> m >> t;
    cin >> sx >> sy >> fx >> fy;
    for (int i = 0; i < t; i++) {
        int x, y;
        cin >> x >> y;
        b[x][y] = 1;
    }
    vis[sx][sy] = 1;
    dfs(sx, sy);
    cout << ans;
    return 0;
}