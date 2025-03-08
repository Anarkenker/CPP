#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

const int N = 3e5;
int cnt[N];

int main() {
    int n, k;
    cin >> n >> k;

    // 检查 k 的合法性
    if (k > n || k < 0) {
        cout << "NO RESULT";
        return 0;
    }

    int max_val = 0;
    for (int i = 0; i < n; i++) {
        int c;
        cin >> c;
        if (max_val < c) {
            max_val = c;
        }
        cnt[c]++;
    }

    int ans = 0;
    for (int i = 0; i <= max_val; i++) {
        if (cnt[i] > 0) {
            ans++;
            if (ans == k) {
                cout << i;
                return 0;
            }
        }
    }
    cout << "NO RESULT";
    return 0;
}