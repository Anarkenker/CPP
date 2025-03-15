#include<iostream>
#include<vector>
#include<algorithm>
#define int long long
using namespace std;
struct farmer{
    int rate, a;
};
bool cmp(farmer& b, farmer& c){
    if(b.rate != c.rate){
        return b.rate < c.rate;
    }
    else{
        return b.a < c.a;
    }
}
signed main(){
    int n, m;
    cin >> n >> m;
    vector<farmer> al(m);
    for(int i = 0; i < m; i++){
        cin >> al[i].rate >> al[i].a;
    }
    sort(al.begin(), al.end(), cmp);
    int sum = 0, ans = 0;
    for(int i = 0; i < m; i++){
        if(sum + al[i].a <= n){
            sum += al[i].a;
            ans += al[i].rate * al[i].a;
        }
        else{
            int cha = n - sum;
            ans += cha * al[i].rate;
            break;
        } 
    }
    cout << ans;
    return 0;
}