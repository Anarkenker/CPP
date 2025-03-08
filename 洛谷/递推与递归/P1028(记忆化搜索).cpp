#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int n, f[1010];
int sol(int x){
    int ans = 1;
    if(f[x] != -1){
        return f[x];
    }
    for(int i = 1; i <= x / 2; i++){
        ans += sol(i);
    }
    return f[x] = ans;
}
//如果是传统的递归的话， 会爆超时，但是用数组存储数据的话，那么就不会爆超时
//这就是记忆化搜索
//传统数组的话sol(2)可能会被sol(4)和sol(8)重复调动从而浪费了大量的时间
int main(){
    cin >> n;
    memset(f, -1, sizeof(f));//memset一般只用于初始化-1或0;
    f[1] = 1;
    cout << sol(n) << endl;
    return 0;
}