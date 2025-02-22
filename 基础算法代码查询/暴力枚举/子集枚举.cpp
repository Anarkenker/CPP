#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

bool isprime(int a){
    int ans = 1;
    if(a == 1 || a == 2){
        ans = 1;
    }
    else if(a > 2){
        for(int i = 2; i * i < a; i++){
            if(a % i == 0){
                ans = 0;
                break;
            }
        }
    }
    return ans;
}
int main(){
    int n, k, cnt = 0;
    cin >> n >> k;
    int a[30] = {0};
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int U = 1 << n;
    for(int i = 0; i < U; i++){
        if(__builtin_popcount(i) == k){
            int sum = 0;
            for(int j = 0; j < n; j++){
                if(i & (1 << j)) sum += a[j];
            }
            if(isprime(sum)) cnt++;
        }
    }
    cout << cnt;
    return 0;
}