//给一个数， 找到每一个数， 左边离他最近的数
#include<iostream>
using namespace std;
/*3 4 2 7 5
-1 3 -1 2 2*/
const int N = 1e6 + 10;
int n;
int stk[N], tt;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        while(tt && stk[tt] >= x) tt--;
        if(tt) cout << stk[tt] << " ";
        else cout << -1 << " ";
    }
    return 0;
}