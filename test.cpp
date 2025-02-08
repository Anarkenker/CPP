#include <iostream>
#include <vector>
using namespace std;
#define int long long

signed main() {
    int n, x, y;
    cin >> n >> x >> y;
    string a, b, c;
    cin >> a >> b >> c;

    vector<int> pos;
    
    // 记录所有错误的索引
    for (int i = 0; i < n; i++) {
        if (((a[i] - '0') ^ (b[i] - '0')) != (c[i] - '0')) {
            pos.push_back(i);
        }
    }

    int cnt = pos.size();
    if (cnt == 0) {
        cout << 0 << endl;
        return 0;
    }

    if (cnt % 2 != 0) {
        cout << "-1" << endl; // 理论上不会发生，题目保证有解
        return 0;
    }

    // 直接翻转的情况
    if (2 * x <= y) {
        cout << cnt * x << endl;
        return 0;
    }

    int cost = 0;
    vector<int> gaps;
    for (int i = 1; i < cnt; i += 2) {
        gaps.push_back(pos[i] - pos[i - 1]);
    }

    int swap_cost = 0;
    for (int gap : gaps) {
        swap_cost += min(2 * x, gap * y);
    }

    cost = min(cnt * x, swap_cost);
    cout << cost << endl;
    return 0;
}
