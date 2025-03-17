//给一个数， 找到每一个数， 左边离他最近的数
#include<iostream>
using namespace std;
/*3 4 2 7 5
-1 3 -1 2 2*/
const int N = 1e6 + 10;
int n;
int stk[N], tt;
void init(){
    tt = 0; 
}
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        while(tt && stk[tt] >= x) tt--;
        if(tt) printf("%d ", stk[tt]);
        else printf("-1 ");
        stk[++tt] = x;
    }
    return 0;
}