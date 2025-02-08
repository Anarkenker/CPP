#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
using namespace std;
typedef vector<int> VI;
const int N = 500;
VI a(N), res(N);
VI mul(VI &a, VI &b){
    VI t(N * 2);
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            t[i + j] += a[i] * b[j];
            t[i + j + 1] += t[i + j] / 10;
            t[i + j] %= 10;
        }
    }
    return t;
}
void quickpow(int p){
    res[0] = 1, a[0] = 2;
    while(p > 0){
        if(p & 1){
            res = mul(res, a);
        }
        a = mul(a, a);
        p >>= 1;
    }
    res[0]--;
}
int result1(int p){
    int ans;
    ans = ceil(log10(2) * p);
    return ans;
}
int main()
{
    int ans1, p;
    cin >> p;
    ans1 = result1(p);
    cout << ans1 << endl;
    quickpow(p);
    int cnt = 0;
    for(int i = 499; i >= 0; i--){
        cout << res[i];
        cnt++;
        if(cnt % 50 == 0){
            cout << endl;
        }
    }
    return 0;
}