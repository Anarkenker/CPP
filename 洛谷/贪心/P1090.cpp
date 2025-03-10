#include <iostream>
#include <queue>
#include <vector>

using namespace std;

signed main() {
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        pq.push(num);
    }
    int sum = 0;
    while (pq.size() > 1) {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        int cost = a + b;
        sum += cost;
        pq.push(cost);
    }
    cout << sum << endl;
    return 0;
}