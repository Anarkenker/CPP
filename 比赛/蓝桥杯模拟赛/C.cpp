#include <bits/stdc++.h>

using namespace std;
#define int long long

int n, m, k;
int ans = 0;

signed main(){    
    cin >> n >> m >> k;
    vector<int> a(n), b(m), c(k);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    for(int i = 0; i < k; i++){
        cin >> c[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            for(int n = 0; n < k; n++){
                int ener;
                ener = (a[i] * b[j]) % c[n];
                ans = max(ener, ans);
            }
        }
    }
    cout << ans;
    return 0;
}