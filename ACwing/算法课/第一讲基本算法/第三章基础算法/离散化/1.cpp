#include<bits/stdc++.h>
using namespace std;

/*可能有重复元素， 需要去重
1， 排列+去重
2. 二分查找*/
// vector<int> alls; // 存储所有待离散化的值
// sort(alls.begin(), alls.end()); // 将所有值排序
// alls.erase(unique(alls.begin(), alls.end()), alls.end());   // 去掉重复元素

// // 二分求出x对应的离散化的值
// int find(int x) // 找到第一个大于等于x的位置
// {
//     int l = 0, r = alls.size() - 1;
//     while (l < r)
//     {
//         int mid = l + r >> 1;
//         if (alls[mid] <= x) l = mid + 1;
//         else r = mid - 1;
//     }
//     return r + 1; // 映射到1, 2, ...n
// }
