#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int minTime = INT_MAX;

void dfs(const vector<int>& problems, int index, int leftTime, int rightTime) {
    if (index == problems.size()) {
        minTime = min(minTime, max(leftTime, rightTime));
        return;
    }
    dfs(problems, index + 1, leftTime + problems[index], rightTime);
    dfs(problems, index + 1, leftTime, rightTime + problems[index]);
}

int calculateMinTime(const vector<int>& problems) {
    minTime = INT_MAX;
    dfs(problems, 0, 0, 0);
    return minTime;
}

int main() {
    int s[4];
    for (int i = 0; i < 4; ++i) {
        cin >> s[i];
    }

    vector<int> subjects[4];
    for (int i = 0; i < 4; ++i) {
        subjects[i].resize(s[i]);
        for (int j = 0; j < s[i]; ++j) {
            cin >> subjects[i][j];
        }
    }

    int totalMinTime = 0;
    for (int i = 0; i < 4; ++i) {
        totalMinTime += calculateMinTime(subjects[i]);
    }

    cout << totalMinTime << endl;
    return 0;
}