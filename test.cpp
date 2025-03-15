#include<iostream>
#include<string>
#include<cctype>
using namespace std;
const int N = 1e6;
int stk[N];
int tt = -1;

// 修正入栈操作，避免数组越界
void push(int a) {
    stk[++tt] = a;
}

int main() {
    string str;
    // 使用 getline 读取整行输入，确保能读取完整表达式
    cin >> str;
    string str1 = "";

    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '@') {
            // 遇到结束符号，结束循环
            break;
        }
        if (isdigit(str[i])) {
            str1 += str[i];
        } else if (str[i] == '.') {
            if (!str1.empty()) {
                int num = stoi(str1);
                str1 = "";
                push(num);
            }
        } else if (str[i] == '-' || str[i] == '*' || str[i] == '+' || str[i] == '/') {
            int n1 = stk[tt--];
            int n2 = stk[tt];
            int mid;
            switch (str[i]) {
                case '-':
                    mid = n2 - n1;
                    break;
                case '*':
                    mid = n2 * n1;
                    break;
                case '+':
                    mid = n2 + n1;
                    break;
                case '/':
                    mid = n2 / n1;
                    break;
            }
            stk[tt] = mid;
        }
    }
    cout << stk[tt] << endl;
    return 0;
}