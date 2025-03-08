#include<iostream>
#include<cstdio>
#include<vector>
#define VI vector<int>
//f(5) = f(4) + f(3);
//f(n) = f(n - 1) + f(n - 2);
using namespace std;
int m, n; 
vector<VI> f(1001);
VI add(VI a, VI b){
    VI c;
    int t = 0;
    for (int i = 0; i < a.size() || i < b.size() || t; i++) {
        if (i < a.size()) t += a[i];
        if (i < b.size()) t += b[i];
        c.push_back(t % 10);
        t /= 10;
    }
    return c;
}
int main(){
    cin >> m >> n;
   f[m].push_back(1); f[m + 1].push_back(1);
    for(int i = m + 2; i <= n; i++){
        f[i] = add(f[i - 1], f[i - 2]);
    }
    VI ans = f[n];
    for(int i = ans.size() - 1; i >= 0; i--){
        cout << ans[i];
    }
    return 0;
}