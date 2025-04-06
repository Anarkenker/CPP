#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

const int N = 1e5 + 10;
string a, b;
vector<pair<string, string>> fun;
int cnt = 1e9;


bool dotask(int visit, string& backup) {
    backup = a;
    size_t pos = a.find(fun[visit].first);
    if (pos != string::npos) {
        size_t size = fun[visit].first.size();
        a.erase(pos, size);
        a.insert(pos, fun[visit].second);
        return true;
    }
    else{
        return false;
    }
}

void undoTask(const string& backup) {
    a = backup;
}

void dfs(int step) {
    if (step > 10) {
        return;
    }

    if (a == b) {
        cnt = min(step, cnt);
        return;
    }

    for (size_t i = 0; i < fun.size(); ++i) {
        string backup;
        if(dotask(i, backup)){
            dfs(step + 1);
        }
       else{
            continue;
        }
        undoTask(backup);
    }
}

int main() {
    cin >> a >> b;
    string str1, str2;
    while (cin >> str1 >> str2) {
        fun.push_back({str1, str2});
    }

    dfs(0);

    if (cnt == 1e9) {
        cout << "NO ANSWER!" << endl;
    } else {
        cout << cnt << endl;
    }

    return 0;
} 