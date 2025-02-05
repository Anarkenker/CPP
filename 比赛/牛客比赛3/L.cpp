#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printEulerPath(int n) {
    vector<int> path;
    int current = 1;
    path.push_back(current);
    for (int layer = 1; layer <= n; ++layer) {
        int start = current;
        int next = start + 1;
        for (int i = 1; i <= layer; ++i) {
            path.push_back(next);
            if (i < layer) {
                path.push_back(start);
            }
            start = next;
            next++;
        }
        if (layer < n) {
            path.push_back(current);
        }
    }
    cout << "Yes" << endl;
    for (size_t i = 0; i < path.size(); ++i) {
        cout << path[i];
        if (i < path.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << "Yes" << endl;
        cout << "1 2 3" << endl;
        return 0;
    }

    printEulerPath(n);

    return 0;
}