#include<bits/stdc++.h>

using namespace std;

int main(){
    int x = 46 * 46;
    int last = 365 - 29 - 31 - 28, ans = 0;
    ans += last;
    for(int i = 2026; i < x; i++){
        if(i % 4 == 0){
            ans += 366;
        }
        else{
            ans += 365;
        }
    }
    cout << ans;
    return 0;
}


