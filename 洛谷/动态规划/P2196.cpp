#include<bits/stdc++.h>

using namespace std;

const int N = 25;
int boom[N], way[N][N]; 
vector<int> al, at;
int n, ans = 0;

void dfs(int np, int cnt){
    bool check = false;
    vector<int> out;
    for(int i = np + 1; i <= n; i++){
        if(way[np][i]){
            check = true;
            out.push_back(i);
        }
    }

    if(!check){
        if(ans < cnt){
            al = at;
            ans = cnt;
        }
        return;
    }

    for(int i = 0; i < out.size(); i++){
        at.push_back(out[i]);
        dfs(out[i], cnt + boom[out[i]]);
        at.pop_back();
    }
}

int main(){
    cin >> n;

    for(int i = 1; i <= n; i++){
        cin >> boom[i];
    }

    for(int i = 1; i <= n; i++){
        for(int j = i + 1; j <= n; j++){
            cin >> way[i][j];
        }
    }
    
    for(int i = 1; i <= n; i++){
        at.push_back(i);
        dfs(i, boom[i]);
        at.pop_back();
    }

    for(int i = 0; i < al.size(); i++){
        cout << al[i] << " ";
    }

    cout << endl << ans;

    return 0;
}