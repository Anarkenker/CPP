#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        int x;
        cin >> x;
        int l = 0, r = n - 1;
        while(l < r){
            int mid = (l + r) >> 1;
            if(a[mid] >= x) r = mid;
            else l = mid + 1;
        }
        if(a[l] == x) cout << l + 1 << " ";
        else cout << "-1 ";
    }
    return 0;
}