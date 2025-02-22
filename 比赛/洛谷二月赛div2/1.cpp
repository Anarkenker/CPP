#include<iostream>
#include<cstdio>
using namespace std;
int timemin = 1e9;
void dfs(int x, int y, int a, int b, int k, int l, int time){
    if(x == a && y == b){
        if(time < timemin){
            timemin = time;
        }
        return;
    }
    else{

    }
}
int main(){
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        int a, b, k, l;
        cin >> a >> b >> k >> l;
        dfs(0, 0, a, b, k, l, 0);
        cout << timemin;    
    }
    return 0;
}