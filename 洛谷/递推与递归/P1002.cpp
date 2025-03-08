#include<iostream>
#include<cstdio>
#define MAXN 22
using namespace std;
//递推式是f[1, 1] = f[1, 0] + f[0, 1];
//这里是想象没有马的情况
long long f[MAXN][MAXN] = {0};
int ctrl[MAXN][MAXN], n, m, hx, hy;
int d[9][2] = {{0, 0}, {1, 2}, {1, -2}, {-1, 2}, {-1, -2}, {2, 1}, {2, -1},
               {-2, 1}, {-2, -1}};
int main(){
    cin >> n >> m >> hx >> hy;
    for(int i = 0; i < 9; i++){
        int tmpx = hx + d[i][0], tmpy = hy + d[i][1];
        if(tmpx >= 0 && tmpx <= n && tmpy >= 0 && tmpy <= m){
            ctrl[tmpx][tmpy] = 1;
        }
    }
    f[0][0] = 1 - ctrl[0][0];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= m; j++){
            if(ctrl[i][j]){
                continue;
            }
            if(i != 0){
                f[i][j] += f[i - 1][j];
            }
            if( j != 0){
                f[i][j] += f[i][j - 1];
            }
        }
    }
    cout << f[n][m];
    return 0;
}