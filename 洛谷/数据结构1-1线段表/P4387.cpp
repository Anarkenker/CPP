#include <bits/stdc++.h>

using namespace std;

const int N = 1e5 + 10;
int stkpush[N], stkpop[N], stk[N];
int tt = 0;

int main(){
    int q;
    cin >> q;
    while(q--){
        tt = 0;
        int n;
        cin >> n;
        vector<int> cun(n);
        for(int i = 0; i < n; i++){
            cin >> stkpush[i];
        }
        for(int i = 0; i < n; i++){
            cin >> stkpop[i];
        }
        for(int i = 0, j = 0; i < n; i++){
            stk[++tt] = stkpush[i];
            while(stk[tt] == stkpop[j] && tt && stkpop[j] && stk[tt]){
                j++;
                tt--;
            }
        }
        if(tt){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }
    return 0;
}