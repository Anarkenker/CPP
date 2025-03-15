#include <iostream>
#include <unordered_map>
using namespace std;

const int N = 1e6 + 10;
int ne[N], e[N], idx, head;
unordered_map<int, int> pos;

void init() {
    head = 0;
    idx = 1;
    e[0] = 1;
    ne[0] = -1;
    pos[1] = 0;
}

void Add(int k, int x) {
    if (pos.find(k) != pos.end()) {
        int k_pos = pos[k];
        e[idx] = x;
        ne[idx] = ne[k_pos];
        ne[k_pos] = idx;
        pos[x] = idx;
        idx++;
    }
}

int query(int x) {
    if (pos.find(x) != pos.end()) {
        int x_pos = pos[x];
        if (ne[x_pos] != -1) {
            return e[ne[x_pos]];
        }
    }
    return 0;
}

void remove(int k) {
    if (pos.find(k) != pos.end()) {
        int k_pos = pos[k];
        if (ne[k_pos] != -1) {
            int next_pos = ne[k_pos];
            ne[k_pos] = ne[next_pos];
            pos.erase(e[next_pos]);
        }
    }
}

int main() {
    int M;
    cin >> M;
    init();
    while (M--) {
        int op;
        cin >> op;
        if (op == 1) {
            int k, x;
            cin >> k >> x;
            Add(k, x);
        } else if (op == 2) {
            int x;
            cin >> x;
            cout << query(x) << endl;
        } else if (op == 3) {
            int k;
            cin >> k;
            remove(k);
        }
    }
    return 0;
}