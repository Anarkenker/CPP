#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
int qu[N];
int hh = 0, tt = -1;
int sum = 0;
int main(){
    int n;
    cin >> n;
    int ini, p;
    cin >> ini;
    sum = ini;
    p = ini;
    for(int i = 1; i < n; i++){
        int now;
        cin >> now;
        sum += abs(now - p);
        cout << "sum" << sum << endl;
        p = now;
    }
    cout << sum;
}