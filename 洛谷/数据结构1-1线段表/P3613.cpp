#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
const int N = 1e5 + 10;
int main(){
    int n, q;
    cin >> n >> q;
    vector<vector<int>> gui(n + 1);
    for(int i = 0; i < q; i++){
        int l, c, j, k;
        cin >> l;
        if(l == 1){
            cin >> c >> j >> k;
            if(gui[c].size() < j + 1){
                gui[c].resize(j + 1);
            }
            gui[c][j] = k;
        }
        else if(l == 2){
            cin >> c >> j;
            cout << gui[c][j] << endl;
        }
    }
    return 0;
}