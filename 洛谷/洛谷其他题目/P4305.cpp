#include <iostream>
#include <vector>
const int N = 5e4 + 10;
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        int s[N] = {0};
        bool sb[N] = {false};
        for (int i = 0, j = 0; i < a.size(); i++) {
            s[a[i]]++;
            while (j <= i && s[a[j]] > 1) {
                if (!sb[a[j]]) {
                    sb[a[j]] = true;
                    s[a[j]]--;
                    j++;
                } else {
                    a.erase(a.begin() + j);
                    i--;
                }
            }
        }
        for (auto it : a) {
            cout << it << " " ;
        }
        cout << endl;
    }
    return 0;
}