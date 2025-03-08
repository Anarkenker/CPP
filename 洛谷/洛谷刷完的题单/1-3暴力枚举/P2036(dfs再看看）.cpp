#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    int u = 1 << n;
    vector<int> a(n); vector<int> s(n);
    for(int i = 0; i < n; i++){
        cin >> s[i] >> a[i];
    }
    int mcha = 100000;
    for(int i = 1; i < u; i++){
        int cnt = 0, wei = i;
        int ts = 1, tk = 0;
        while(wei > 0){
            if(wei & 1){
                ts *= s[cnt];
                tk += a[cnt];   
            }
            cnt++;
            wei >>= 1;
        }
        if(abs(ts - tk) < mcha){
            mcha = abs(ts - tk);
        }
    }
    cout << mcha;
    return 0;
}