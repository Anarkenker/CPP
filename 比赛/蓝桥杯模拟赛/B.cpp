#include <bits/stdc++.h>

using namespace std;

int firstdigit(long long num){
    while(num / 10){
        num /= 10;
    }
    return static_cast<int>(num);
}

int main(){
    set<int> u;
    long long cun2 = 1, cun5 = 1;
    for(int i = 0; i < 1e5; i++){
        cun2 *= 2;
        cun5 *= 5;

        u.insert(firstdigit(cun2) * firstdigit(cun5));
    }

    int ans = 0;
    for(auto it : u){
        ans += it;
    }

    cout << ans;

    return 0;
}