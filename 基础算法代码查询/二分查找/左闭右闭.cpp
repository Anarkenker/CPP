#include<iostream>
#include<cstdio>
using namespace std;
int n;

int bsearch(int q[], int l, int r) {
    while (l < r) {
        int mid = l + r + 1 >> 1;
        if (q[mid] > n) {
            r = mid - 1;
        } else {
            l = mid;
        }
    }
    return l;
}