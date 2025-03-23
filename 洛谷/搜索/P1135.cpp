#include <iostream>
#include <queue>

using namespace std;

const int N = 210;
int k[N], n, a, b;
bool vis[N];

int main() {
    cin >> n >> a >> b;
    for (int i = 1; i <= n; i++) {
        cin >> k[i];
    }

    queue<pair<int, int>> q;
    q.push({a, 0});

    while (!q.empty()) {
        auto [pos, cnt] = q.front();
        q.pop();

        if (pos <= 0 || pos > n) {
            continue;
        }

        if (pos == b) {
            cout << cnt;
            return 0;
        }

        int newpos = pos + k[pos];
        if (newpos > 0 && newpos <= n && !vis[newpos]) {
            q.push({newpos, cnt + 1});
            vis[newpos] = 1;
        }

        newpos = pos - k[pos];
        if (newpos > 0 && newpos <= n && !vis[newpos]) {
            q.push({newpos, cnt + 1});
            vis[newpos] = 1;
        }
    }

    cout << -1;
    return 0;
}    