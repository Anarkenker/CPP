#include<iostream>
#include<vector>
using namespace std;
const int N = 1e6;    
int m, n;
int qu[N], hh = 0, tt = -1;
void pop(){
    hh ++;
}
void push(int x){
    if(tt - hh < m - 1){
        qu[++ tt] = x;
    }
    else{
        pop();
        qu[++ tt] = x;
    }
}
int main(){
    cin >> m >> n;
    int ans = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        bool check = false;
        for(int j = hh; j <= tt; j++){
            if(qu[j] == x){
                check = true;
            }
        }
        if(!check){
            push(x);
            ans ++;
        }
    }
    cout << ans;
    return 0;
}