#include<iostream>
#include<cstdio>
#define int long long
using namespace std;
const int N = 1000010;
int a[N], tmp[N], n;
int mergesort(int q[], int l, int r){
    if(l >= r) return 0;
    int mid = l + r >> 1;
    int res = mergesort(q, l, mid) + mergesort(q, mid + 1, r);
    int k = 0, i = l, j = mid + 1;
    while(i <= mid && j <= r){
        if(q[i] <= q[j]) tmp[k++] = q[i++];
        else{
            res += mid - i + 1;
            tmp[k++] = q[j++];
        }
    }
    while(i <= mid) tmp[k++] = q[i++];
    while(j <= r) tmp[k++] = q[j++];
    for(int i = l, j = 0; i <= r; i++, j++) q[i] = tmp[j];
    return res;
}
signed main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << mergesort(a, 0, n - 1) << endl;
    return 0;
}