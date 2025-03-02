#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int N = 1e5 + 10; 
int n, m, a[N];
bool check(int mid){
    int cnt = (n + m - 1/ m), minl = 0;
    for(int i = 1; i <= n; i++){
        int sum = 0;
        for(int j = 0; j < cnt; j++){
            sum +=a[i + j];
        }
        if(sum < minl){
            minl = sum;
        }
    } 
}
int main(){
    cin >> n >> m;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int l = 
}