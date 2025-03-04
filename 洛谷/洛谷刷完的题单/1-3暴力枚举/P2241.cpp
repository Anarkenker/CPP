#include<iostream>
#include<cstdio>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    long long ans1 = 0, ans2 = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int temp = (n - i) * (m - j);
            if(i == j) ans1 += temp;
            else ans2 += temp;
        }
    }
    cout << ans1 << " " << ans2;
    return 0;
}