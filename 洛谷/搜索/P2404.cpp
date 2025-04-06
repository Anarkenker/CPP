#include<bits/stdc++.h>

using namespace std;

const int N = 1e4;
int n;
int fun[N];

void dfs(int sum, int cnt, int last){

    if (sum == n) {
        if(cnt == 1){
            return;
        }
        for (int i = 0; i < cnt - 1; i++) {
            cout << fun[i] << '+';
        }
        cout << fun[cnt - 1] << endl;
        return;
    }

    else if(sum > n){
        return;
    }

    for (int i = last; i <= n - 1 && sum <= n - i; i++){
        fun[cnt] = i;
        dfs(sum + i, cnt + 1, i);
    }
    
}

int main(){
    cin >> n;
    dfs(0, 0, 1);
    return 0;
}