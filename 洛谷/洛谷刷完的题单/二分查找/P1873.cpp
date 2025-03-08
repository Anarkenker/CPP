#include<iostream>
#include<cstdio>
#include<algorithm>
#define int long long
using namespace std;
const int N = 1e6 + 10;
int a[N], n, m, r = 0;
signed main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
       scanf("%lld", &a[i]);
       r = max(a[i], r);
    }
    int l = 0;
    while(l <= r){//这个是闭区间
        int mid = l + r >> 1;
        int tmp = 0;
        for(int i = 0; i < n; i++){
            if(a[i] > mid) tmp += a[i] - mid;
        }
        if(tmp < m) r = mid - 1;
        else l = mid + 1;
    }
    cout << r;
    return 0;
}