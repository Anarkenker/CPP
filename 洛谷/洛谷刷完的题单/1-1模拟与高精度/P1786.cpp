#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<algorithm>
#define int long long
using namespace std;

struct peo{
    string name, pos;
    int g, gra, num1, num2;
};
bool cmp(peo a, peo b){
    if(a.g == b.g){
        return a.num1 < b.num1;
    }
    else{
        return a.g > b.g;
    }
}
bool cmp2(peo a, peo b){
    if(a.pos == b.pos){
        if(a.gra == b.gra){
            return a.num1 < b.num1;
        }
        else{
            return a.gra > b.gra;
        }
    }
    else{
        return a.num2 < b.num2;
    }
}
signed main(){
    int n;
    cin >> n;
    vector<peo> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].name >> a[i].pos >> a[i].g >> a[i].gra;
        a[i].num1 = i;
    }
    sort(a.begin() + 3, a.end(), cmp);
    int cnt = 0;
    for(int i = 0; i< n; i++){
        cnt++;
        if(cnt > 3 && cnt <= 5){
            a[i].pos = "HuFa";
        }
        if(cnt > 5 && cnt <= 9){
            a[i].pos = "ZhangLao";
        }
        if(cnt > 9 && cnt <= 16){
            a[i].pos = "TangZhu";
        }
        if(cnt > 16 && cnt <= 41){
            a[i].pos = "JingYing";
        }
        if(cnt > 41){
            a[i].pos = "BangZhong";
        }
        a[i].num2 = i;
    }
    sort(a.begin(), a.end(), cmp2);
    for(int i = 0; i < n; i++){
        cout << a[i].name << " " << a[i].pos << " " << a[i].gra << " " << endl;
    }
    return 0;
}