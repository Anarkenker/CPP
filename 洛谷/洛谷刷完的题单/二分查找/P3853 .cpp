#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define int long long
const int N = 1e5 +10;
double l, k, a[N];
int n;
bool check(int mid){
    int ans = 0;
    if(mid == 0) return 0;
    for(int i = 1; i <= n; i++){
        ans += (a[i] - a[i - 1] + mid - 1) / mid - 1; 
    }
    return ans <= k;
}
signed main(){    
    cin >> l >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    a[n + 1] = l;
    int left = 0, right = l, best;
    while(left <= right){
        int mid = (left + right) >> 1;
        if(check(mid)){
            best = mid;
            right = mid - 1;
        }
        else  left = mid + 1;
    }
    cout << best;
    return 0;
}