#include<iostream>
#include<cstdio>
using namespace std;
//归并应该是一种双指针算法
//本质上是合二为一
//一个排序算法稳定意思是原序列的两个值是相同的，排完的答案序列是和原先一样的，就可以说是稳定的
//归并排序的时间复杂度是nlog(2)n;
//nlog(2)n;
//n个数除成1需要logn次，也就是logn层，每层消耗时间是O（n）
const int N = 10000010;
int n;
int q[N], tmp[N];

void mergesort(int q[], int l, int r){

    if(l >= r) return;

    int mid = l + r >> 1;

    mergesort(q, l, mid);
    mergesort(q, mid + 1, r);

    int k = 0, i = l, j = mid + 1;
    while(i <= mid && j <= r)
        if(q[i] <= q[j]) tmp[k++] = q[i++];
        else tmp[k++] = q[j++];
    while(i <= mid) tmp[k++] = q[i++];
    while(j <= r) tmp[k++] = q[j++];

    for(int i = l, j = 0; i <= r; i++, j++) q[i] = tmp[j];

}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> q[i];
    }
    mergesort(q, 0, n - 1);
    for(int i = 0; i < n; i++){
        cout << q[i];
    }
    return 0;
}

void mergesort1(int q[], int l, int r){
    if(l >= r) return;

    int mid = l + r >> 1;//借此机会提醒一下自己要熟悉一下进制之间的转换

    mergesort1(q, l, mid); mergesort1(q, mid + 1, r);
    int k = 0, i = l, j = mid + 1;
    while(i <= mid && j <= r){
        if(q[i] <= q[j]) tmp[k++] = q[i++];
        else tmp[k++] = q[j++]; 
    }
    while(i <= mid) tmp[k++] = q[i++];
    while(j <= r) tmp[k++] = q[j++];
    for(i = l, j = 0; i <= r; i++, j++) q[i] = tmp[j];
}

void mergesort2(int q[], int l, int r){
    if(l >= r) return;
    int mid = (l + r) >> 1;
    mergesort2(q, l, mid); mergesort2(q, mid + 1, r);
    int k = 0, i = l, j = mid + 1;
    while(i <= mid && j <= r){
        if(q[i] <= q[j]) tmp[k++] = q[i++];
        else tmp[k++] = q[j++];
    }
    while(i <= mid) tmp[k++] = q[i++];
    while(j <= r) tmp[k++] = q[j++];
    for(i = l, j = 0; i <= r; i++) q[i] = tmp[j]; 
}