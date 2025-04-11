#include <bits/stdc++.h>

using namespace std;

int n;

int main(){
    cin >> n;
    vector<int> b(n - 1), c(n);
    for(int i = 0; i < n - 1; i++){
        cin >> b[i];
    }
    for(int i = 0; i < n; i++){
        cin >> c[i];
    }
    int x, y;
    cin >> x >> y;
    int time = 0;
    for(int i = x - 1; i <= y - 1; i++){
        time += c[i];
    }
    for(int i = x - 1; i < y - 1; i++){
        time += b[i];
    }
    cout << time;
    return 0;
}