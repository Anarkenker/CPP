#include <iostream>
using namespace std;

// 全局变量用于记录满足条件的答题情况数量
int count = 0;

// 深度优先搜索函数
void dfs(int index, int score) {
    // 如果已经答完 30 道题
    if (index == 30) {
        // 若当前分数为 70 分，情况数量加 1
        if (score == 70) {
            count++;
        }
        return;
    }
    // 答对的情况，前提是分数未达到 100 分
    if (score < 100) {
        dfs(index + 1, score + 10);
    }
    // 答错的情况，分数归零
    dfs(index + 1, 0);
}

int main() {
    // 从第 0 题开始，初始分数为 0
    dfs(0, 0);
    // 输出满足条件的答题情况数量
    cout << count << endl;
    return 0;
}    