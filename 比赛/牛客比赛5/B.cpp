#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    int T;
    cin >> T;
    for(int c = 0; c < T; c++){
        long long n, t, k;
        cin >> n >> t >> k;
        long long ji = n - k;
        long long ans = 0;
        ans = floor(ji / t);
        cout << ans << endl;
    }
    return 0;
}