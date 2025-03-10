#include<iostream>
#include<cstdio>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
using PII = pair<int, int>;
int main(){
    int n, a, s, b;
    cin >> n >> s;
    cin >> a >> b;
    vector<PII> ans;
    for(int i = 0; i < n; i++){
        int f, s;
        cin >> f >> s;
        ans.push_back({s, f});
    }
    sort(ans.begin(), ans.end());
    int sum = 0;
    for(auto it : ans){
        if(s - it.first < 0){
            break;
        }
        else if(it.second <= a + b){
            sum++;
            s -= it.first;
        }
    }
    cout << sum;
    return 0;
}