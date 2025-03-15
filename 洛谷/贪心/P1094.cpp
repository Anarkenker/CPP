#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int w, n;
    cin >> w >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int ans = 0;
    int i = 0, j = n - 1;
    while (i <= j) {
        if (a[i] + a[j] <= w) {
            i++;
            j--;
        } else {
            j--;
        }
        ans++;
    }

    cout << ans << endl;
    return 0;
}