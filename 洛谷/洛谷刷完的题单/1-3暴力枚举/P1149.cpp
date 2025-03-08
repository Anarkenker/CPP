#include<iostream>
#include<cstdio>
using namespace std;
int num[11]={6,2,5,5,4,5,6,3,7,6};
int cost(int x){
    int ans = 0;
    if(x == 0){
        ans = 6;
    }
    while(x != 0){
        int temp = x % 10;
        ans += num[temp];
        x /= 10;
    }
    return ans;
}
int main(){
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0; i < 1000; i++){
        for(int j = 0; j < 1000; j++){
            if(cost(i) + cost(j) + 4 + cost(i + j) == n){
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}