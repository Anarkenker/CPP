#include <iostream>
#include <list>
#include <map>

using namespace std;

const int N = 1e5 + 10;
list<int> a;
map<int, list<int>::iterator> pos;
int tot = 1;

int main() {
    int n;
    cin >> n;
    a.push_back(1);
    pos[1] = a.begin();

    for (int i = 1; i < n; i++) {
        int k, p;
        scanf("%d %d", &k, &p);
        tot++;
        auto it = pos[k];
        if (p == 0) {
            auto NewIt = a.insert(it, tot);
            pos[tot] = NewIt;
        } else if (p == 1) {
            it++;
            auto NewIt = a.insert(it, tot);
            pos[tot] = NewIt;
        }
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        int x;
        scanf("%d", &x);
        auto it = pos.find(x);
        if (it != pos.end()) {
            a.erase(it->second);
            pos.erase(it);
        }
    }

    for (const auto& num : a) {
        printf("%d ", num);
    }

    return 0;
}