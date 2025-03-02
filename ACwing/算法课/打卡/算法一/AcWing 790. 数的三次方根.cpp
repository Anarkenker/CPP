#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
    double n;
    cin >> n;
    double l = 0, r = 1e5 + 10;
    while(r - l > 1e-9){
        double mid = (l + r) / 2;
        long double che = mid * mid * mid;
        if(che >= n) r = mid;
        else l = mid;  
    }
    l += 1e-6;
    int ans = floor(l);
    cout << ans;
    return 0;
}