#include <iostream>
using namespace std;

int ans = 0;

void dfs(int step, int score) {
    if (score == 70) {
        ans++;
    }
    if (step == 30 || score >= 100) {
        return;
    }
    
    if (score + 10 <= 90) {
        dfs(step + 1, score + 10);
    }

    dfs(step + 1, 0);
}

int main() {
    dfs(0, 0);
    cout << ans << endl;
    return 0;
}