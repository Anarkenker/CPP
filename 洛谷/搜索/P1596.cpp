#include <iostream>
#include <utility>

using namespace std;

const int N = 1e4;

int n, m, ans = 0;
char map1[N][N];
pair<int, int> q[N];
int hh = 0, tt = -1;

bool isInRange(int x, int y) {
    return x >= 1 && x <= n && y >= 1 && y <= m;
}

void push(pair<int, int> mid) {
    q[++tt] = mid;
}

void pop() {
    ++hh;
}

pair<int, int> front() {
    return q[hh];
}

bool empty() {
    return hh > tt;
}

void bfs(int x, int y) {
    push({x, y});
    map1[x][y] = '.';

    while (!empty()) {
        auto [px, py] = front();
        pop();

        for (int i = -1; i <= 1; ++i) {
            for (int j = -1; j <= 1; ++j) {
                if (i == 0 && j == 0) continue;
                int nx = px + i;
                int ny = py + j;
                if (isInRange(nx, ny) && map1[nx][ny] == 'W') {
                    push({nx, ny});
                    map1[nx][ny] = '.';
                }
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> map1[i][j];
        }
    }

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (map1[i][j] == 'W') {
                bfs(i, j);
                ans++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}    