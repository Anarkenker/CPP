#include <iostream>
#include <vector>
using namespace std;
vector<int> add(const vector<int>& a, const vector<int>& b) {
    vector<int> c;
    int t = 0;
    for (int i = 0; i < a.size() || i < b.size() || t; i++) {
        if (i < a.size()) t += a[i];
        if (i < b.size()) t += b[i];
        c.push_back(t % 10);
        t /= 10;
    }
    return c;
}
vector<int> feb(int n) {
    if (n == 1) return {1};
    if (n == 2) return {2};
    vector<int> a = {1}, b = {2}, c;
    for (int i = 3; i <= n; i++) {
        c = add(a, b);
        a = b;
        b = c;
    }
    return b;
}
int main() {
    int n;
    cin >> n;
    vector<int> result = feb(n);
    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }
    cout << endl;
    return 0;
}