#include<bits/stdc++.h>

using namespace std;

const int N = 310;
int m, cntt = 0;
vector<vector<int>> a(N, vector<int>(N, 999999));
int time1[N][N];
int vis[N][N];
void bfs(int sx, int sy) {
    queue<pair<int, int>> q;
    q.push({sx, sy});
    time1[sx][sy] = 0;
    vis[0][0] = 1;
    while (!q.empty()) {
        auto [px, py] = q.front();
        q.pop();

        if (a[px][py] == 999999) {
            cntt = time1[px][py];
            return ;
        }

        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, 1, -1};
        for (int i = 0; i < 4; i++) {
            int nx = px + dx[i];
            int ny = py + dy[i];
            if (nx >= 0 && ny >= 0 && a[nx][ny] > time1[px][py] + 1 && !vis[nx][ny]) {
                q.push({nx, ny});
                time1[nx][ny] = time1[px][py] + 1;
                vis[nx][ny] = 1;
            }
            else if(vis[nx][ny]){
                continue;
            }
        }
    }
    cntt = -1;
}

void destroy(int x, int y, int t) {
    a[x][y] = min(a[x][y], t);
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};
    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx >= 0 && ny >= 0) {
            a[nx][ny] = min(a[nx][ny], t);
        }
    }
}

int main() {
    cin >> m;

    for (int i = 0; i < m; i++) {
        int x, y, t;
        cin >> x >> y >> t;
        destroy(x, y, t);
    }

    bfs(0, 0);
    cout << cntt;
    return 0;
}