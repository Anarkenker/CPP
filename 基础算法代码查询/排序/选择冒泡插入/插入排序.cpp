#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int n;
vector<int> a(n);
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) { // 从第二个元素开始
        int key = arr[i]; // 当前需要插入的元素
        int j = i - 1;

        // 将比 key 大的元素向后移动
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // 插入 key 到正确位置
        arr[j + 1] = key;
    }
}

int main(){
    return 0;
}