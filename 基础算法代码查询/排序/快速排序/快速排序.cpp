#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;

void qsort(int l, int r, vector<int>& a){
    int i = l, j = r, flag = a[(l + r) / 2], tmp;
    do {
        while (a[i] < flag) i++;
        while (a[j] > flag) j--;
        if(i <= j){
            tmp = a[i];a[i] = a[j]; a[j] = tmp;
            i++; j--;
        }
    }while(i <= j);
    if (l < j) qsort(l, j, a);
    if (i < r) qsort(i, r, a); 
}
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    qsort(0, n - 1, a);
    for(int i = 0; i < n; i++){
        cout << a[i] << ' ';
    }
    return 0;
}