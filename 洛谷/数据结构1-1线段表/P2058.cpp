#include <iostream>
#include <queue>
#include <vector>

using namespace std;

const int N = 1e5 + 5;
struct Node {
    int x;
    int t;
};
int num[N];
int ans = 0; 

int main() {
    int n;
    cin >> n;

    queue<Node> q;

    for (int i = 1; i <= n; i++) {
        int t, k;
        cin >> t >> k;
        for (int j = 0; j < k; j++) {
            int x;
            cin >> x;
            Node newNode;
            newNode.x = x;
            newNode.t = t;
            q.push(newNode);
            if (++num[x] == 1) {
                ans++;
            }
        }
        while (!q.empty() && q.front().t + 86400 <= t) {
            Node frontNode = q.front();
            q.pop();
            if (--num[frontNode.x] == 0) {
                ans--;
            }
        }
        cout << ans << endl;
    }
    return 0;
}