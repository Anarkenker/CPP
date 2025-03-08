#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long l = 0, r = n;
    while (l < r) {
        long long mid = l + (r + 1) / 2;
        if (mid * mid * mid <= n) {
            l = mid;
        } else {
            r = mid - 1;
        }
    }
    cout << l << endl;
    return 0;
}