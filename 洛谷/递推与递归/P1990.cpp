#include<iostream>
#include<cstdio>
//F[N] = F[N - 1] + F[N - 2];//如果是纯长方形的话
//f[N - 2]有两种情况 = f[N - 3] + F[N - 3];//混杂的情况下？
//f[N] = f[N - 1] + F[N - 1];
//F[n] = F[N - 1] + F[N - 2] + 2f[N - 2];
using namespace std;
const int maxn=1000002;
const int mod=10000;
int f[maxn], g[maxn];
int main(){
    int N;
    cin >> N;
    f[0] = 1;
    f[1] = g[1] = 1;
    for(int i = 2; i <= N; i++){
        f[i] = (f[i - 1] + f[i - 2] + 2 * g[i - 2]) % mod;
        g[i] = (g[i - 1] + f[i - 1]) % mod;
    }
    cout << f[N] << endl;
    return 0; 
}