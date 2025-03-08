#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<char>> an(n,vector<char>(m));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> an[i][j];
        }
    }
    vector<int> cntw(n, 0);
    vector<int> cntb(n, 0);
    vector<int> cntr(n, 0);
    for(int i = 0; i < n; i++){
        int w = 0, r = 0, b = 0;
        for(int j = 0; j < m; j++){
            if(an[i][j] == 'W'){
                w++;
            }
            else if(an[i][j] == 'B'){
                b++;
            }
            else if(an[i][j] == 'R'){
                r++;
            }
        }
        cntw[i] = r + b;
        cntr[i] = b + w;
        cntb[i] = w + r;
    }
    int min = 100000;
    for(int i = 0; i < n - 2; i++){
        for(int j = i + 1; j < n - 1; j++){
            int sumi = 0, sumj = 0, sumk = 0;
            for(int a = 0; a <= i; a++){
                sumi += cntw[a];
            }
            for(int a = i + 1; a <= j; a++){
                sumj += cntb[a];
            }
            for(int a = j + 1; a <= n - 1; a++){
                sumk += cntr[a];
            }
            int sum = sumi + sumj + sumk;
            if(sum < min){
                min = sum;
            }
        }
    }
    cout << min;
    return 0;
}