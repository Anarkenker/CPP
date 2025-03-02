#include<iostream>
#include<cstdio>
using namespace std;
int n;
int bsearch(int q[], int l, int r){//这个r = num.size()上一个r = num.size() - 1;
    while(l < r){
        int mid = (l + r) >> 1;
        if(q[mid] > n) r = mid;//这里本来mid本来就不属于这个区间， 所以可以相等
        else l = mid + 1;
    }
    return l - 1;
}
int main(){
}