#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int cnt = 0;
void bubblesort(int n, vector<int>& a){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1 - i; j++){
            if(a[j] > a[j + 1]){
                int tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
                cnt++;
            }
        }
    }
}
int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
    bubblesort(N, a);
    cout << cnt;
    return 0;
}