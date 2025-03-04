#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstdlib>
#define int long long
using namespace std;
const int N = 1e6 + 10;
int m, a[N], n, b[N], ans = 0, mina = N, maxa = 0;
signed main(){
    cin >> m >> n;
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }
    sort(a, a + m);
    for(int i = 0; i < n; i++){
        cin >> b[i];
    }
    for(int i = 0; i < n; i++){
        int x = b[i];
        int l = 0, r = m;
        while(l < r){
            int mid = (l + r) >> 1;
            if(x < a[mid]) r = mid;
            else l = mid + 1;
        }
        if(b[i] <= a[0]){
            ans += a[0] -b[i];
        }
        else if(b[i] >= a[m - 1]){
            ans += b[i] - a[m - 1];
        }
        else{
            ans += min(abs(a[l] - b[i]), abs(a[l - 1] - b[i]));
        }
    }
    cout << ans;
    return 0;
}