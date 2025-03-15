#include<iostream>
using namespace std;
const int N = 1e6 + 10;
int r[N], l[N], e[N], idx;
void init(){
    //0表示左端, 1表示右端
    r[0] = 1, l[1] = 0;
    idx = 2;
}
void AddRight(int k, int x){
    e[idx] = x;
    r[idx] = r[k];
    l[idx] = k;
    l[r[k]] = idx;
    r[k] = idx;
}
void AddLeft(int k, int x){
    AddRight(l[k], x);
}
void Remove(int k){
    r[l[k]] = r[k];
    l[r[k]] = l[k]; 
}
int main(){
    
}