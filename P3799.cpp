#include<cstdio>
#include<iostream>
using namespace std;
const long long mod = 1e9 + 7;
int a[5005];
int C(int a,int b){
    int ans = 1;
    if(b == 1){
        ans = a;
    }
    else if(b == 2){
        ans = (a*(a-1))/2;
    }
    return ans;
}
int main(){
    int n,i,j,p;
    long long sum = 0;
    scanf("%d",&n);
    for(i=0;i<n;++i){
        scanf("%d",&p);
        ++a[p];
    }
    for(i=1;i<=5000;++i){
        if(a[i] >= 2){
            for(j=1;j<i/2;++j){
                if(a[j] != 0 && a[i-j] != 0){
                    sum += C(a[i],2) * C(a[j],1) * C(a[i-j],1);
                    sum %= mod;
                }
            }
            if(i % 2 == 0 && a[i/2] >= 2){
                sum += C(a[i],2) * C(a[i/2],2);
                sum %= mod;
            }
            else if(i % 2 == 1){
                sum += C(a[i],2) * C(a[i/2],1) * C(a[i-i/2],1);
                sum %= mod;
            }
        }
    }
    cout << sum;
    return 0;
}