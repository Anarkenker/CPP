#include <iostream>
#include <algorithm>
#define int long long
using namespace std;

const int N = 1e5 + 10;
int n, m, a[N];

bool check(int mid) {
    int ans = 1, sum = 0;
    for (int i = 1; i <= n; i++) {
        if (sum + a[i] <= mid) {
            sum += a[i];
        } else {
            sum = a[i];
            ans++;
        }
    }
    return ans <= m;
}

signed main() {
    cin >> n >> m;
    int ans = 0;
    int maxn = 0, sumn = 0;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        maxn = max(maxn, a[i]);
        sumn += a[i];
    }

    int l = maxn, r = sumn;
    while (l <= r) {
        int mid = l + r >> 1;
        if (check(mid)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }

    cout << ans;
    return 0;
}
