#include<iostream>
#include<cstdio>
#include<vector>
#define N 1010
using namespace std;
int a[N][N], b[N][N], c[N][N];
int n, q;
int ans = 0;
int main(){
    cin >> n >> q;
    for(int i = 0; i < q; i++){
        int x, y, z;
        cin >> x >> y >> z;
        a[x][y]++;
        b[y][z]++;
        c[x][z]++;
        if(a[x][y] >= n){
            ans++;
        }
        if(b[y][z] >= n){
            ans++;
        }
        if(c[x][z] >= n){
            ans++;
        }
        cout << ans << endl;;
    }
    return 0;
}
