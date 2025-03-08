#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
void quick_sort(int q[], int l, int r)
{
    if (l >= r) return;
    int i = l - 1, j = r + 1, x = q[l + r >> 1];
    while (i < j)
    {
        do i ++ ; while (q[i] < x);
        do j -- ; while (q[j] > x);
        if (i < j) swap(q[i], q[j]);
    }
    quick_sort(q, l, j);
    quick_sort(q, j + 1, r);
}
void quicksort(int q[], int l, int r){
    if(l >= r) return;
    int i = l - 1, j = r + 1, x = q[l + r >> 1];
    while(i < j){
        do i++; while(q[i] < x);
        do j--; while(q[j] > x);
        if(i < j) swap(q[i], q[j]);
    }
    quicksort(q, l, j);
    quicksort(q, j + 1, r);
}
void quicksort2(int q[], int l, int r){
    if(l >= r) return;
    int i = l - 1, j = r + 1, x = q[l + r >> 1];
    while(i < j){
        do i++; while(q[i] < x);
        do j--; while(q[j] > x);
        if(i < j) swap(q[i], q[j]);
    }
    quicksort2(q, l, j);
    quicksort2(q, j + 1, r);
}
void quicksort3(int q[], int l, int r){
    if(l >= r) return;
    int x = q[l], i = l - 1, j = r + 1;
    while(i < j){
        do i++; while(q[i] <= x);
        do j--; while(q[j] > x);
        if(i < j){
            swap(q[i], q[j]);
        }
    }
    quicksort3(q, l, j);
    quicksort3(q, j + 1, r);
}