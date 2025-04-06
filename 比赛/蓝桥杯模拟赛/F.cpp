#include<bits/stdc++.h>

using namespace std;
#define int long long

bool check(int mid, vector<int>& a, vector<int>& b) {
    long double sum = 0;
    for (int i = 0; i < a.size(); i++) {
        sum += b[i];
        long double cost = (long double)mid / a[i];
        sum -= cost;
        if (sum < 0) {
            return false;
        }
    }
    return true;
}

signed main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int j = 0; j < n; j++) {
            cin >> b[j];
        }

        int l = 0, r = 1e18;
        int ans = 0;
        while (l <= r) {
            int mid = (l + r) / 2;
            if (check(mid, a, b)) {
                ans = mid;
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}    