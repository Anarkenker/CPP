#include<iostream>
using namespace std;
const int N = 1e6;
int n;
int stk[N], tt = 0;
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
}