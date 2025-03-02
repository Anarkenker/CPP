#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    auto pos = find(a.begin(), a.end(), x);
    if(pos == a.end()){
        cout << "-1";
        return 0;
    }
    int p = distance(a.begin(), pos);
    cout << p;
    return 0;
}