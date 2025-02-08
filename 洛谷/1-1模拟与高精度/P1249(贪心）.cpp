#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#define int long long
using namespace std;
const int N = 500;
vector<int> mul(vector<int> a, vector<int> b){
    vector<int> t(N * 2);
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N ; j++){
            t[i + j] += a[i] * b[j];
            t[i + j + 1] += t[i + j] / 10;
            t[i + j] %= 10;
        }
    }
    return t;
}
signed main(){
    int n;
    cin >> n;
    int sum = 0, cnt = 0;
    vector<int> a(N);
    for(int i = 2; ; i++){
        sum += i;
        a[cnt] = i;
        cnt++;
        if(sum >= n){
            break;
        }
    }
    if(sum != n){
        sum = sum - a[cnt];
        cnt--;
    }
    else{
        
    }
}