#include <iostream>
#include <vector>
using namespace std;

void rota1(vector<vector<long long>>& A, int r, int x, int y) {
    int size = 2 * r + 1;
    vector<vector<long long>> temp(size, vector<long long>(size));
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            temp[i][j] = A[x - r + i][y - r + j];
        }
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            A[x - r + j][y - r + size - 1 - i] = temp[i][j];
        }
    }
}
void rota2(vector<vector<long long>>& A, int r, int x, int y) {
    int size = 2 * r + 1;
    vector<vector<long long>> temp(size, vector<long long>(size));
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            temp[i][j] = A[x - r + i][y - r + j];
        }
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            A[x - r + size - 1 - j][y - r + i] = temp[i][j];
        }
    }
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<long long>> ans(n, vector<long long>(n));
    long long cnt = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ans[i][j] = cnt++;
        }
    }
    for (int i = 0; i < m; i++) {
        int x, y, r, flag;
        cin >> x >> y >> r >>  flag;
        x--; y--;
        if (flag == 0) {
            rota1(ans, r, x, y);
        } else if (flag == 1) {
            rota2(ans, r, x, y);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}