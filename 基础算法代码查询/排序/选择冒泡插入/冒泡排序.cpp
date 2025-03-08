#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

void bubblesort(vector<int>& a,int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(a[j] > a[j + 1]){
                int p = a[j];
                a[j] = a[j + 1];
                a[j + 1] = p;
            }
        }
    }
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    bubblesort(a, n);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    return 0;
}