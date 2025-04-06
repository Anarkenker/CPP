#include <bits/stdc++.h>
using namespace std;

map<int, int> num = {{0, 13}, {1, 1}, {2, 2}, {3, 3}, {4, 5}, {5, 4}, {6, 4}, {7, 2}, {8, 2}, {9, 2}};
int cunp[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int cunr[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int ans = 0;

int cal(int sy, int sm, int sd) {
    int sum = 0;

    while (sy / 10) {
        sum += num[sy % 10];
        sy /= 10;
    }
    sum += num[sy % 10];

    if (sm > 10) {
        sum += num[sm % 10];
        sm /= 10;
        sum += num[sm];
    } else {
        sum += num[0] + num[sm];
    }

    if (sd > 10) {
        sum += num[sd % 10];
        sd /= 10;
        sum += num[sd];
    } else {
        sum += num[0] + num[sd];
    }

    return sum;
}

void time1(int& sy, int& sm, int& sd) {
    int len = cal(sy, sm, sd);
    if (len > 50) {
        ans++;
    }
    // 修正循环条件
    while (sy < 2024 || (sy == 2024 && sm < 4) || (sy == 2024 && sm == 4 && sd <= 13)) {
        sd++;
        if (sy % 4 != 0) {
            if (sd > cunp[sm - 1]) {
                sm++;
                sd = 1;
            }
            if (sm > 12) {
                sy++;
                sm = 1;
            }
        } else {
            if (sd > cunr[sm - 1]) {
                sm++;
                sd = 1;
            }
            if (sm > 12) {
                sy++;
                sm = 1;
            }
        }
        len = cal(sy, sm, sd);
        if (len > 50) {
            ans++;
        }
    }
}

int main() {
    int sy = 2000, sm = 1, sd = 1;
    time1(sy, sm, sd);

    cout << ans;
    return 0;
}