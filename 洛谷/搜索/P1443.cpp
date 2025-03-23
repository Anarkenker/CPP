#include<bits/stdc++.h>
using namespace std;

const int N = 410;
int n, m, x, y;
int memo[N][N];

int dx[8] = {-1, -1, -2, -2, 1, 1, 2, 2};
int dy[8] = {-2, 2, -1, 1, -2, 2, -1, 1};

void bfs(int startX, int startY) {
    queue<pair<int, int>> q;
    q.push({startX, startY});
    memo[startX][startY] = 0;

    while (!q.empty()) {
        pair<int, int> cun = q.front();
        int px = cun.first;
        int py = cun.second;
        q.pop();
        for (int i = 0; i < 8; i++) {
            int nx = px + dx[i];
            int ny = py + dy[i];
            if (nx >= 1 && nx <= n && ny >= 1 && ny <= m && memo[nx][ny] == -1) {
                memo[nx][ny] = memo[px][py] + 1;
                q.push({nx, ny});
            }
        }
    }
}

int main() {
    cin >> n >> m >> x >> y;
    memset(memo, -1, sizeof(memo));
    bfs(x, y);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cout << memo[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}