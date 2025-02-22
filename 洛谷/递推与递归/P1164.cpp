#include<iostream>
#include<cstdio>
#include<vector>
#include<map>
using namespace std;
int M, N;
map<pair<int, int>, int> rcd;
int dfs(int cnt, int num, vector<int>&a){
    if(rcd.count({cnt, num})) return rcd[{cnt, num}];
    if(cnt == N && num == M){
        return 1;
    }
    if(cnt == N || num > M){
        return 0;
    }
    return  rcd[{cnt, num}] = 
        dfs(cnt + 1, num, a) +
        dfs(cnt + 1, num + a[cnt], a);
}
int main(){
    cin >> N >> M;
    vector<int> mon(N);
    for(int i = 0; i < N; i++){
        cin >> mon[i];
    }
    auto ans = dfs(0, 0, mon);
    cout << ans;
    return 0;
}