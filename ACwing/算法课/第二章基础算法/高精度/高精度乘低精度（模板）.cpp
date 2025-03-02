#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
// C = A * b, A >= 0, b >= 0
vector<int> mul(vector<int> &A, int b)
{
    vector<int> C;

    int t = 0;
    for (int i = 0; i < A.size() || t; i ++ )
    {
        if(i < A.size()) t += A[i] * b;
        t += A[i] * b;
        C.push_back(t % 10);
        t /= 10;
    }
    while (C.size() > 1 && C.back() == 0) C.pop_back();
    return C;
}

vector<int> mul(vector<int>& A, int b){
    vector<int> C;
        int k = 0;
    for(int i = 0 ; i < A.size() || k; i++){
        if(i < A.size()) k += A[i] * b;
        C.push_back(k % 10);
        k /= 10;
    }
    if(k) C.push_back(k);
    return C;
}
