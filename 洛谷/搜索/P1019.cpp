#include<bits/stdc++.h>

using namespace std;

const int N = 40;
int n, vis[N], ans = 0;
string str[N];
char h;

void dfs(const string& tmp) {
    ans = max(int(tmp.size()), ans);
    for (int i = 1; i <= n; i++) {
        if (vis[i] >= 2) continue;
        for (int j = 1; j < min(tmp.size(), str[i].size()); j++) {
            if (tmp.substr(tmp.size() - j) == str[i].substr(0, j)) {
                vis[i]++;
                dfs(tmp + str[i].substr(j));
                vis[i]--;
            }
        }
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> str[i];
    }

    cin >> h;
    for (int i = 1; i <= n; i++) {
        if (str[i][0] == h) {
            vis[i]++;
            dfs(str[i]);
            vis[i]--;
        }
    }
    cout << ans << endl;
    return 0;
}