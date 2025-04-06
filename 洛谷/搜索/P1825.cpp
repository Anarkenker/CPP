#include <iostream>
#include <queue>
#include <map>
#include <cctype>
using namespace std;

const int N = 320;
int n, m, sx, sy, ans = 1e9;
char a[N][N];
int vis[N][N];
int flagx[] = {0, 0, -1, 1}, flagy[] = {1, -1, 0, 0};

map<char, pair<int, int>> map1;
map<char, pair<int, int>> map2;

void bfs() {
    queue<tuple<int, int, int>> q;
    q.push({sx, sy, 0});
    vis[sx][sy] = 1;

    while (!q.empty()) {
        auto [px, py, pcnt] = q.front();
        q.pop();

        if (isalpha(a[px][py])) {
            pair<int, int> other_end;
            if (map1[a[px][py]] == make_pair(px, py)) {
                other_end = map2[a[px][py]];
            } else {
                other_end = map1[a[px][py]];
            }
            int tx = other_end.first;
            int ty = other_end.second;
            if (!vis[tx][ty]) {
                q.push({tx, ty, pcnt});
                vis[tx][ty] = 1;
                continue;
            }
        }

        for (int i = 0; i < 4; i++) {
            int nx = px + flagx[i];
            int ny = py + flagy[i];

            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (a[nx][ny] == '#') continue;
            if (vis[nx][ny]) continue;

            if (a[nx][ny] == '=') {
                ans = pcnt + 1;
                return;
            }

            if (a[nx][ny] == '.') {
                q.push({nx, ny, pcnt + 1});
                vis[nx][ny] = 1;
            }
        }
    }
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] == '@') {
                sx = i;
                sy = j;
            }

            if (isalpha(a[i][j])) {
                if (!map1.count(a[i][j])) {
                    map1[a[i][j]] = make_pair(i, j);
                } else {
                    map2[a[i][j]] = make_pair(i, j);
                }
            }
        }
    }
    bfs();
    if (ans == 1e9) ans = -1;
    cout << ans << endl;

    return 0;
}