#include <iostream>
#include <vector>
#include <algorithm>
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
        a.erase(unique(a.begin(), a.end()));
        for(auto i = 0; i < a.size(); i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}