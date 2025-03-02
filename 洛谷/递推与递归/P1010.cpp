#include <iostream>
#include <cmath>
using namespace std;

// 递归函数，将 x 用 2 的幂次方表示并输出
void dfs(int x) {
    if (x == 0) {
        cout << "0";
        return;
    }
    if (x == 1) {
        cout << "2(0)";
        return;
    }
    if (x == 2) {
        cout << "2";
        return;
    }

    bool first = true;
    while (x) {
        int cnt = log2(x);
        x -= pow(2, cnt);

        if (!first) {
            cout << "+";
        }
        first = false;

        cout << "2(";
        dfs(cnt);
        cout << ")";
    }
}

int main() {
    int n;
    cin >> n;
    dfs(n);
    return 0;
}