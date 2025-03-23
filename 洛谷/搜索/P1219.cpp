#include<iostream>
#include<cstdio>

using namespace std;

const int N = 100;
int n, ans = 0;

int a[N], p1[N], p2[N], p3[N];

void dfs(int x){

    if(x > n){
        ans++;
        if(ans <= 3){
            for(int i = 1; i <= n; i++){
                cout << a[i] << " "; 
            }
            cout << endl;
        }
        return;
    }

    for(int i = 1; i <= n; i++){
        if(p1[i] == 0 && p2[x + i] == 0 && p3[x - i + 15] == 0){
            p1[i] = 1; p2[x + i] = 1; p3[x - i + 15] = 1;
            a[x] = i;
            dfs(x + 1);
            p1[i] = 0; p2[x + i] = 0; p3[x - i + 15] = 0;
        }
    }

}

int main(){
    cin >> n;
    dfs(1);
    cout << ans;
    return 0;
}