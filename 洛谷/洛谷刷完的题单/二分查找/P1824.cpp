#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int N = 1e5 + 10;
int n, c;
int a[N];
bool check(int mid){
    int cnt = 1, p = a[1];
    for(int i = 2; i <= n; i++){
        if(a[i] - p >= mid){
            cnt++;
            p = a[i];
        }
    }
    return cnt >= c;
}
int main(){
    cin >> n >> c;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    int l = 0, r = a[n] - a[1];
    while(l <= r){
        int mid = l + r >> 1;
        if(check(mid)) l = mid + 1;
        else r = mid - 1;
    }
    cout << r;
    return 0;
}