#include<bits/stdc++.h>
#define int long long

using namespace std;

//a * b = lcm(a, b) * gcd(a, b);

int lcm(int a, int b){
    return (a * b) / gcd(a, b);
}

signed main(){

}