#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;
#define int double
struct coins{
    int m, v, rate;
    coins(int m, int v, int rate) : m(m), v(v), rate(rate){}
};

bool cmp(coins a, coins b){
    if(a.rate != b.rate){
        return a.rate > b.rate; 
    }
    else{
        return a.m < b.m;
    }
}

vector<coins> a;
signed main(){
    int n, t;
    cin >> n >> t;
    for(int i = 0; i < n; i++){
        int m, v, rate;
        cin >> m >> v;
        rate = v / m;
        coins coin(m, v, rate);
        a.push_back(coin);
    }
    sort(a.begin(), a.end(), cmp);
    int i = 0, T = 0, sum = 0; 
    for(i = 0;; i++){
        T += a[i].m;
        sum += a[i].rate;
        if(T >= 1000 && i == a.size() - 1){
            int cha = T - 1000;
            sum -= cha * a[i].rate;
        }
    }
    printf("%.2lf", sum);
    return 0;
}