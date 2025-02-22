#include<iostream>
#include<cstdio>
using namespace std;
//i个元素有h[i] 出管方式，那么比低i个元素出管的有和h[i - 1]种出管方式， 
//相当于前面k - 1个数有h[k - 1]种方法后面n - k个数有h[n - k]种出管方式。
//得到递推式h[i] = h[j - 1] * h[i - j]//j < n 
int main(){
    int n, h[20] = {1, 1};
    cin >> n;
    for(int i = 2; i <= n; i++){
        for(int j = 1; j <= i; j++){
            h[i] += h[j - 1] * h[i - j];
        }
    }
    cout << h[n];
    return 0;
}