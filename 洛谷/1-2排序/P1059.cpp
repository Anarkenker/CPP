#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int N;
    cin >> N;
    vector<int> a(N);
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int b[1000];
    int m = 0;
    for(int i = 0; i < N; i++){
        if(a[i] != a[i - 1]){
            b[m] = a[i];
            m++;
        }
    }

    cout << m <<endl;
    for(int i = 0; i < m; i++){
        cout << b[i] << " "; 
    }
    return 0;
}