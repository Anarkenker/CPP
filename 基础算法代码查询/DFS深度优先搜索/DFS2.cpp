#include<iostream>
#include<cstdio>
using namespace std;
int ans = 0, n, a[50];
void dfs(int cnt, int num, int work){
    if(num == 10){
        if(cnt == n){
            if(work == 0){
                ans++;
            }
            else{
                for(int i = 0; i < n; i++){
                    cout << a[i] << " ";
                }
                cout << endl;
            }
        }
        return;
    }
    for(int i = 1; i <= 3; i++){
        a[num] = i;
        dfs(cnt + i, num + 1, work);
    }
}
int main(){
    cin >> n;
    dfs(0, 0, 0);
    cout << ans << endl;
    dfs(0, 0, 1);
    return 0;
}