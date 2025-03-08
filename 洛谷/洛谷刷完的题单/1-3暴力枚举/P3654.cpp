#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int main(){
    int r, c, k;
    cin >> r >> c >> k;
    vector<vector<char>> map(r, vector<char>(c));
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> map[i][j];
        }
    }
    int ans = 0;
    //检查有几列
    for(int i = 0; i < c; i++){
        int wei = 0;
        for(int j = 0; j < r; j++){
            if(map[j][i] == '.'){
                wei++;
            }
            if(map[j][i] == '#'){
                wei = 0;
            }
            if(wei >= k){
                ans++;
            }
        }
        
    }
    for(int i = 0; i < r; i++){
        int wei = 0;
        for(int j = 0; j < c; j++){    
            if(map[i][j] == '.'){
                wei++;
            }
            if(map[i][j] == '#'){
                wei = 0;
            }
            if(wei >= k){
                ans++;
            }
        }
        
    }
    if(k == 1) ans /= 2;
    cout << ans;
    return 0;
}