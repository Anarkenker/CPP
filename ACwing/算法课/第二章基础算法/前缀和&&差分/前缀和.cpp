#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
/*前缀和
Si = a1 + a2 + a3 + a4 + .. + ai;
前缀和的作用[l, r] 如果要遍历出所有数的和那么时间复杂度就是O（n）；
Sr - S(l - 1) 前缀和的时间复杂度是O（1）；这就是前缀和比较大的作用
Sr = a1 + a2 + a3 + a4 +... + ar
S(l - 1) = a1 + a2 + a3 + a4 + .... + a(l - 1)
so that Sr - S(l - 1) == a(l - 1) + ... + ar
接下来就要放模板了！！！！！！？是一种思想而不是一种模板
*/
const int N = 100010;
int n, m;
int a[N], s[N];
int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) s[i] = s[i - 1] + a[i]; // 前缀和的初始化
    while(m--){
        int l, r;
        cin >> l >> r;
        cout << s[r] - s[l - 1];
    }
    return 0;
}