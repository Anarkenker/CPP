#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
#define int long long
int cun = 0;
void jia(int& speed){
    speed += 10;
}
void jian(int& speed){
    if(speed >= 5){
        speed -= 5;
    }
    else{
        speed = 0;
    }
}
void lihejian(int& speed){
    if(speed >= 10){
        speed -= 10;
    }
    else if(speed == 0){
        cun = -1;
    }
    else{
        cun = speed;
        speed = 0;
    }
}
void lihejia(int& speed){
    if(cun > 0){
        speed = cun;
        cun = 0;
    }
    else if(cun == -1){
        speed = 0;
        cun = 0;
    }
    else{
        speed += 10;
    }
}
signed main(){
    int speed = 0, n, x =0;
    cin >> n;
    string a;
    cin >> a;
    for(int i = 0; i < n; i++){
        switch (a[i]){
            case '0': jia(speed); x += speed; break;
            case '1': jian(speed); x += speed; break;
            case '2': lihejian(speed); x += speed; lihejia(speed); break;
        }
    }
    cout << x;
    return 0;
}