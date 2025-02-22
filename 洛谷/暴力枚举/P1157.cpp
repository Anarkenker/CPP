#include<iostream>
#include<cstdio>
#include<iomanip>
#include<vector>
using namespace std;
int main(){
    long long n, r;
    cin >> n >> r;
    long long U = 1 << n;
    int ans[30] = {0};
    for(long long i = U - 1; i >= 0; i--){
        int cnt = 0;
        for(long long j = 0; j < n; j++){
            if(i & (1 << j)){
                ans[cnt++] = j;    
            }
        }    
        if(cnt == r){
            for(int j = r - 1; j >= 0; j--){
                cout << setw(3) << n - ans[j];
            }
            cout << endl;
        }
        
    }
    return 0;
}