#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<cstdlib>
using namespace std;
#define int long long
int ans = 0;
signed main(){
    int n, x, y;
    cin >> n >> x >> y;
    string a, b, c;
    vector<bool> pan(n,1);
    cin >> a >> b >> c;
    for(int i = 0; i < n; i++){
        if(c[i] == '1'){
            pan[i] = 0;
        }
    }
    vector<int> pos(n,0);
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if((a[i] == b[i]) != pan[i]){
            pos[cnt] = i;
            cnt++;
        }
    }
    cout << cnt << endl;
    if(2 * x <= y){
        ans = cnt * x;
    }
    else{
        for(int i = 0; i < cnt; i++){
            for(int j = i + 1; j < cnt; j++){
                if(a[pos[i]] != a[pos[j]]){
                    swap(a[pos[i]], a[pos[j]]);
                    ans += y;
                    pos.erase(pos.begin() + i);
                    pos.erase(pos.begin() + j);
                    cnt -= 2;
                    cout << ans << endl;
                }
            }
        }
        cout << "cnt" << cnt << endl;
        cnt = abs(cnt);
        if(cnt != 0){
            ans += cnt * x;
        }
    }
    cout << ans;
    return 0;
}