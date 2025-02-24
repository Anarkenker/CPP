#include<iostream>
#include<cstdio>
#include<vector>
#include<cstdlib>
#include<algorithm>
#include<map>
#define int long long
using namespace std;
map<int ,int> m;
int a[200002];
signed main(){
    int n, c, ans = 0;
    cin >> n >> c;
    for(int i = 0; i < n; i++){
        scanf("%lld", &a[i]);
        m[a[i]]++;
    }
    sort(a, a + n);
    for(int i = 0; i < n; i++){
        int l = 0, r = n - 1;
        int x = a[i] - c;
        while(l < r){
            int mid = (l + r) >> 1;
            if(a[mid] >= x) r = mid;
            else l = mid + 1;
        }
        if(a[l] == x){
            ans += m[a[l]];
        }
    }
    cout << ans;
    return 0;
}