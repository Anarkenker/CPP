#include<iostream>
using namespace std;   
int a, b, c;
bool check(double mid){
    double tot = a;
    for(int i = 0; i < c; i++){
        tot *= mid;
        tot -= b;
    }
    return tot <= 0;
}
int main(){
    double l = 0, r = 5, ans = 0;
    cin >> a >> b >> c;
    while(r - l >= 1e-4){
        double mid = (r + l) / 2;
        if(check(mid)){
            l = mid;
            ans = mid;
        } 
        else r = mid;
    }
    printf("%.1lf", 100 * ans - 100);
    return 0;
}