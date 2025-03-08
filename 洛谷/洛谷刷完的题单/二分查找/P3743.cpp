#include<iostream>
#include<cstdio>
using namespace std;
const int N = 2e5;
double n, p;
double a[N], b[N];
double sum = 0;
int check(double ans){
	double q = p * ans;
	sum=0;
	for(int i = 0; i < n; i++){
		if(a[i] * ans <= b[i]){
			continue;
		}
		sum += (a[i] * ans - b[i]);
	}
	return sum <= q;
}
int main(){
    cin >> n >> p;
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
        sum += a[i];
    }
    if(sum <= p){
		cout<< -1.00000000 <<endl;
		return 0;
	}
    double l = 0, r = 1e10;
    while(r - l >= 1e-6){
        double mid = (l + r) / 2;
        if(check(mid)){ 
            l = mid;
        }
        else r = mid;
    }
    printf("%lf", r);
    return 0;
}