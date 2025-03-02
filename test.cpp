#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

const int N = 1e5 + 10;
int l, n, k, a[N];

// 检查以 mid 为相邻石头间最小距离时，移除的石头数是否不超过 k
bool check(int mid) {
    int p = 0;  // 记录上一个未移除石头的位置，初始为 0
    int ans = 0;  // 记录需要移除的石头总数
    for (int i = 1; i <= n; i++) {
        if (a[i] - p > mid) {
            // 计算两个石头间需要移除的石头数并累加
            ans += (a[i] - p - 1) / mid;
        }
        p = a[i];  // 更新上一个未移除石头的位置
    }
    return ans <= k;  // 判断移除的石头数是否不超过 k
}

int main() {
    cin >> l >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    a[++n] = l;  // 将路径终点作为一个石头加入数组

    int left = 1;  // 二分查找左边界，最小距离从 1 开始
    int right = l;  // 二分查找右边界，最大距离为路径长度
    while (left <= right) {
        int mid = (left + right) >> 1;  // 计算中间值
        if (check(mid)) {
            left = mid + 1;  // 若 mid 满足条件，尝试更大的距离
        } else {
            right = mid - 1;  // 若 mid 不满足条件，尝试更小的距离
        }
    }
    cout << right;  // 输出最大的最小距离
    return 0;
}