#include<iostream>
#include<vector>
using namespace std;
int n, k, ans = 0;
void qsort(int l, int r, vector<int>& a){
    int key = a[(r + l) / 2], i = l, j = r;
    do{
        while(a[i] < key) i++;
        while(a[j] > key) j--;
        if(j >= i){
            swap(a[i], a[j]);
            i++; j--;
        }
    }while(i <= j);
    if(k <= j) qsort(l, j, a);
    else if(k >= i) qsort(i, r, a);
    else {
        printf("%d", a[j + 1]);
        return ;
    }
}
int main(){

    cin >> n >> k;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    qsort(0, n - 1, a);
    return 0;
}