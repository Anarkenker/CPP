#include <bits/stdc++.h>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b){
    return b == 0 ? a : gcd(b, a % b);
}

int main(){
    int a, b;
    cin >> a >> b;
    gcd(a, b);
    return 0;
}