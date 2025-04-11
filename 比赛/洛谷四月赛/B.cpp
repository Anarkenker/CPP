#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll l, e;

int main(){
    cin >> l >> e;
    if(l >= 8 || (l >= 6 && e == 1)){
        cout << 3;
    }
    else if(l >= 3){
        cout << 6;
    }
    else{
        cout << "Impossible";
    }
    return 0;
}