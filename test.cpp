#include <iostream>
#include <vector>

using namespace std;

// 冒泡排序函数
void bubblesort(vector<int>& a, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int p = a[j];
                a[j] = a[j + 1];
                a[j + 1] = p;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    // 在读取 n 之后再初始化向量 a
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // 调用冒泡排序函数
    bubblesort(a, n);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}