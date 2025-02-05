#include <iostream>
#include <cstring> // 包含memset

int main() {
    int arr[10];
    memset(arr, 0, sizeof(arr)); // 将数组arr的所有字节设置为0

    std::cout << "Initialized array: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    char buffer[10];
    memset(buffer, 'A', sizeof(buffer)); // 将buffer的所有字节设置为'A'

    std::cout << "Initialized buffer: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << buffer[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}