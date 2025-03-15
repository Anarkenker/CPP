#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#define int long long
using namespace std;
signed main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int i = 0, j = n - 1;
    bool flag = 0;
    int sum = a[j] * a[j];
    while(i <= j){
        if(flag){
            flag = 0;
            sum += (a[j] - a[i]) * (a[j] - a[i]);
            i++;
        }
        else{
            flag = 1;
            sum += (a[j] - a[i]) * (a[j] - a[i]);
            j--;
        }
    }
    cout << sum;
    return 0;
}