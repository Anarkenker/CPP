#include<iostream>
#include<cmath>
using namespace std;
#define int long long
int fun(int num){
    int sum = 1;
    for(int i = 0; i < num; i++){
        sum *= 2;
    }
    return sum;
}
void dfs(int a, int b, int x, int y, int l){
    if(l == 1) return;
    if(x - a <= l/2 - 1 && y - b <= l / 2 - 1){
        cout << a + l
    }
}
int main(){
    int k;
    cin >> k;
    int x, y;
    cin >> x >> y;
    int len = fun(k);
    dfs(1, 1 , x, y, len);
    return 0;
}