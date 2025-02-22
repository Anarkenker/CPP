#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int n, ans = 0;
vector<int> ansa(10);
vector<vector<int>> ansb;
void dfs(int cnt, int tas){
    if(cnt == 10){
        if(tas == n){
            ans++;
            ansb.push_back(ansa);
        }
        return;
    }
    for(int i = 1; i <= 3; i++){
        ansa[cnt] = i;
        dfs(cnt + 1, tas + i);
    }
}
int main(){
    cin >> n;
    dfs(0, 0);
    cout << ans << endl;
    for(int j = 0; j < ans; j++){
        for(int i = 0; i < 10; i++){
            cout << ansb[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}