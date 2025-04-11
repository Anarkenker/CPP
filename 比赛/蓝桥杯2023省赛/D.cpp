#include <iostream>
#include <vector>
#define int long long

using namespace std;

const int N = 1e5 + 10;

int n, a[N];
vector<int> c;

signed main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int sum = 0;
    for (int L = 1; L <= n; L++) {
        int x = 0;
        for (int R = L; R <= n; R++) {
            x ^= a[R];
            sum += x;
        }
    }
    
    for (int i = 0; i < c.size(); i++) {
        sum += c[i];
    }
    cout << sum;
    return 0;
}