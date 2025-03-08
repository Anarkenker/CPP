#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#define int long long
using namespace std;
const int N = 500;
vector<int> mul(vector<int> a, int b){
    vector<int> t(N * 2, 0);
    for(int i = 0; i < N; i++){
        t[i] += a[i] * b;
        t[i + 1] += t[i] / 10;
        t[i] %= 10;
    }
    return t;
}
signed main(){
    int n;
    cin >> n;
    int sum = 0, cnt = 0;
    vector<int> a(N);
    for(int i = 2; ; i++){
        sum += i;
        a[cnt] = i;
        cnt++;
        if(sum >= n){
            break;
        }
    }
    vector<int> ans(N,0);
    if(sum != n){
        sum = sum - a[cnt - 1];
        cnt--;
        int yu = n - sum;
        int cnt2 = cnt;
        for(int j = 1; j <= yu; j++){
            a[cnt2 - j] += 1;
            if(cnt2 - j == 0){
                cnt2 += cnt2;
            }
        }
    }
    //cout << cnt << endl;
    for(int i = 0; i < cnt; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    ans[0] = 1;
    for(int i = 0; i < cnt; i++){
        ans = mul(ans, a[i]);
    }
    int wei = N - 1;
    while(ans[wei] == 0 && wei > 0) wei--;
    for(int i = wei; i >= 0; i--){
        cout << ans[i];
    }
    return 0;
}