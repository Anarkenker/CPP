#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
const int N = 100010;
int a[N], tmp[N];
void mergesort(int a[], int l, int r){
    if(l >= r) return;
    int mid = (l + r) >> 1;
    mergesort(a, l, mid), mergesort(a, mid + 1, r);
    int k = 0, i = l, j = mid + 1;
    while(i <= mid && j <= r){
        if((a[i] <= a[j])) tmp[k++] = a[i++];
        else tmp[k++] = a[j++];
    }
    while(i <= mid) tmp[k++] = a[i++];
    while(j <= r) tmp[k++] = a[j++];
    for(int i = l, j = 0; i <= r; i++, j++){
        a[i] = tmp[j];
    }
}
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    mergesort(a, 0, n - 1);
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    return 0;
}