#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define LL long long
int a[10];
int main(){
    LL A, B, C, x, y, z, cnt = 0;
    cin >> A >> B >> C;
    for(int i = 1; i <= 9; i++){
        a[i] = i;
    }
    do{
        x = a[1] * 100 + a[2] * 10 + a[3];
        y = a[4] * 100 + a[5] * 10 + a[6];
        z = a[7] * 100 + a[8] * 10 + a[9];
        if(x * B == y * A && y * B == z * B){
            cout << x << " " << y << " " << z << endl; 
        }
    }while(next_permutation(a + 1, a + 10));
    if(!cnt) cout << "No!!!";
    return 0;
}