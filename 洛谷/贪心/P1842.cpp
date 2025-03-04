#include<iostream>
#include<cstdio>
#include<algorithm>
#include<map>
#define int long long
using namespace std;
const int N = 1e5;
int n;
map<int, int> m;
int sumw = 0, sums = 0;
signed main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        int s, w;
        cin >> s >> w;
        m[s] = w;
    }
    int l = 0, r = sumw;
    
    cout << r;
    return 0;
}