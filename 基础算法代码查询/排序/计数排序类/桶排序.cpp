#include <iostream>
#include <vector>
#include <algorithm>
// 桶排序函数
void bucketSort(std::vector<double>& arr) {
    int n = arr.size();
    if (n <= 0) return;
    // 1. 初始化桶
    std::vector<std::vector<double>> buckets(n);
    // 2. 找到数组中的最大值和最小值
    double max_val = arr[0];
    double min_val = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max_val) max_val = arr[i];
        if (arr[i] < min_val) min_val = arr[i];
    }
    // 3. 计算每个桶的范围
    double range = (max_val - min_val) / n;
    // 4. 分配数据到桶
    for (int i = 0; i < n; ++i) {
        // 计算元素应该放入的桶的索引
        int bucket_index = static_cast<int>((arr[i] - min_val) / range);
        if (bucket_index == n) bucket_index--;
        buckets[bucket_index].push_back(arr[i]);
    }
    // 5. 对每个桶进行排序
    for (int i = 0; i < n; ++i) {
        std::sort(buckets[i].begin(), buckets[i].end());
    }
    // 6. 合并桶中的数据
    int index = 0;
    for (int i = 0; i < n; ++i) {
        for (double num : buckets[i]) {
            arr[index++] = num;
        }
    }
}
// 测试代码
int main() {
    std::vector<double> arr = {0.42, 0.32, 0.33, 0.52, 0.37, 0.47, 0.51};
    bucketSort(arr);
    std::cout << "排序后的数组: ";
    for (double num : arr) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}