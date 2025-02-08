#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
struct vol{
    int num, gra;
};
bool cmp(vol s1, vol s2){
    if(s1.gra != s2.gra){
        return s1.gra > s2.gra;
    }
    else{
        return s1.num < s2.num;
    }
}
int main(){
    int n, m;
    cin >> n >> m;
    vector<vol> a(n);
    for(int i = 0 ; i < n; i++){
        cin >> a[i].num >> a[i].gra;
    }
    sort(a.begin(), a.end(), cmp);
    int m2 = floor(m * 3 / 2);
    while(a[m2].gra == a[m2 - 1].gra) m2++;
    cout << a[m2 - 1].gra << " " << m2 << endl;
    for(int i = 0; i < m2; i++){
        cout << a[i].num << " " << a[i].gra << endl;
    }
    return 0;
}