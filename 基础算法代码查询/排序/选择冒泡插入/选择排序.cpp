#include<iostream>
#include<cstdio>
#include<vector>
#define VI vector<int>
using namespace std;

void chsort(int n, VI& a){
    for(int i = 0; i < n-1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[j] < a[i]){
                int p = a[i];
                a[i] = a[j];
                a[j] = p;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    VI a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    chsort(n, a);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}