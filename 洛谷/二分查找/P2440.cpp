#include<iostream>
#include<cstdio>
#define int long long
using namespace std;
const int N = 1e8 + 10;
int n, k;
int a[N];
bool f(int x){
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans += a[i] / x;
    }
    return ans >= k;
}
signed main(){
    cin >> n >> k;
    int min = 1e9 + 10;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int l = 1, r = 1e8 + 10;
    while(l <= r){
        int mid = (l + r) >> 1;
        if(f(mid)) l = mid + 1;
        else r = mid - 1;
    }
    cout << l - 1 << endl;
    return 0;
}