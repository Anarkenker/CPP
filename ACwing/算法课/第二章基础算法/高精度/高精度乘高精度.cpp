#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
vector<int> BigintMultiple(vector<int>& A, vector<int>& B){
    vector<int> C(A.size() + B.size());
    int t = 0;
    for(int i = 0; i < A.size(); i++){
        for(int j = 0; j < B.size(); j++){
          C[i + j] += A[i] * B[i];
        }
    }
    int t = 0;
    for(int i = 0; i < C.size(); i++){
        t += C[i];
        C[i] = t % 10;
        t /= 10;
    }
    while(C.size() > 1 && C.back() == 0) C.pop_back();
    return C;
}
int main(){
    
}