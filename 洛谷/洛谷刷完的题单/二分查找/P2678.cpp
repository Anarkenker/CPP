#include<iostream>
#include<cstdio>
#include<algorithm>
#define int long long
using namespace std;
const int n = 1e5;
int L, N, M, a[n];
bool check(int mid){
    int p = 0, ans = 0;
    for(int i = 1; i <= N; i++){
        if(a[i] - p < mid) ans++;
        else p = a[i];
    }
    if(ans <= M) return true;
    else return false;
}
signed main(){    
    cin >> L >> N >> M;
    for(int i = 1; i <= N; i++){
        cin >> a[i];
    }
    a[++N] = L;
    int l = 1, r = L;
    while(l <= r){
        int mid = (l + r) >> 1;
        if(check(mid)) l = mid + 1;
        else r = mid - 1;
    }
    cout << r;
    return 0;
}