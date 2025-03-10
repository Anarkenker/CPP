#include<iostream>
#include<vector>
using namespace std;
#define int long long
signed main(){
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for(int i = 0;  i < n; i++){
        cin >> a[i];
    }
    int sum = 0;
    for(int i = 0; i < n - 1; i++){
        while(a[i] + a[i + 1] > x){
            int cha = ((a[i] + a[i + 1]) - x);
            if(a[i + 1] == 0){
                a[i] = a[i] - cha;
                sum += cha;
            }
            if(a[i + 1] != 0 && a[i + 1] >= cha){
                a[i + 1] -= cha;
                sum += cha;
            }
            else if(a[i + 1] != 0 && a[i + 1] < cha){
                sum += a[i + 1];
                a[i + 1] = 0;
            }
        }
    }
    cout << sum;
    return 0;
}