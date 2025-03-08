#include <iostream>
#include <cstring> // 包含memset

int main() {
    int arr[10];
    memset(arr, 1, sizeof(arr)); // 将数组arr的所有字节设置为0

    for (int i = 0; i < 10; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}