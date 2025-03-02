#include<iostream>
#include<cstdio>
using namespace std;
double a, b, c, d;
double Cal(double mid){
    return a * mid * mid * mid + b * mid * mid + c * mid + d;
}
int main(){
    cin >> a >> b >> c >> d;
    int flag = 0;
    for(int i = -100; i <= 100; i++){
        double l = i, r = i + 1;
        double x1 = Cal(l), x2 = Cal(r);
        if(!x1){
            printf("%.2lf ", l);
            flag++;
        }
        if(x1 * x2 < 0){
            while(r - l > 1e-4){
                double mid = (l + r) / 2;
                if(Cal(mid) * Cal(r) <= 0) l = mid;
                else r = mid;
            }
            printf("%.2lf ", l);
            flag++;
        }
        if(flag == 3) break;
    }
    return 0;
}