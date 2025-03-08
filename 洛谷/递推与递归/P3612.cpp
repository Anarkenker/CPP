#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
//123 123312 123312212331 1233122122331112331221233
#define int long long
int n;
string stri, ans;
signed main(){
    cin >> stri >> n;
    int cnt = stri.size(), i;
    while(cnt < n){
        i = cnt;
        while(n > i){
            i *= 2;
        }
        i /= 2;
        n -= (i + 1);
        if(n == 0){
            n = i;
        }
    }
    cout << stri[n - 1];
    return 0;
}