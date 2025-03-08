#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
using PAI = pair<int ,int>;
const int N = 3e6 + 10;
vector<int> alls;
vector<PAI> add, query;
int a[N], s[N];
int find(int x){
    int l = 0, r = alls.size();
    int mid = l + r >> 1;
    while(l < r){
        if(alls[mid] >= x) r = mid;
        else l = mid + 1;
    }
    return l + 1;
}
int main(){
    int n, m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int x, c;
        cin >> x >> c;
        add.push_back({x, c});
        alls.push_back(x);
    }
    for(int i = 0; i < m; i++){
        int l, r;
        cin >> l >> r;
        query.push_back({l, r});
        alls.push_back({l});
        alls.push_back({r});
    }
    sort(alls.begin(), alls.end());
    alls.erase(unique(alls.begin(), alls.end()) ,alls.end());
    for(auto it : add){
        int x = find(it.first);
        a[x] += it.second;
    }
    for(int i = 1; i <= alls.size(); i++){
        s[i] = s[i - 1] + a[i];
    }
    for(auto it : query){
        int l = find(it.first), r = find(it.second);
        cout << s[r] - s[l - 1] << endl;
    }
    return 0;
}