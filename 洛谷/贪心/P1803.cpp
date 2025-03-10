#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
struct race{
    int st, et;
    int dis;
};
bool cmp(race a, race b){
    if(a.et != b.et){
        return a.et < b.et;
    }
    else{
        return a.dis < b.dis;
    }
}
int main(){
    int n;
    cin >> n;
    vector<race> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].st >> a[i].et;
        a[i].dis = a[i].et - a[i].st; 
    }
    int ans = 0;
    sort(a.begin(), a.end(), cmp);
    int st = -1e9, et = -1e9;
    for(int i = 0; i < n; i++){
        if(et <= a[i].st){
            st = a[i].st;
            et = a[i].et;
            ans++;
        }
    }
    cout << ans;
    return 0;
}