#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
// C = A - B, 满足A >= B, A >= 0, B >= 0
bool cmp(vector<int>& A, vector<int>& B){
    if(A.size() != B.size()) return A.size() > B.size();
    for(int i = A.size(); i >= 0; i--){
        if(A[i] != B[i]){
            return A[i] > B[i];
        }
    }
    return true;
}

vector<int> sub(vector<int> &A, vector<int> &B)
{
    vector<int> C;
    for (int i = 0, t = 0; i < A.size(); i ++ )
    {
        t = A[i] - t;
        if (i < B.size()) t -= B[i];
        C.push_back((t + 10) % 10);
        if (t < 0) t = 1;
        else t = 0;
    }
    //去掉前导零
    while (C.size() > 1 && C.back() == 0) C.pop_back();
    return C;
}

vector<int> sub(vector<int> &A, vector<int> &B){
    vector<int> C;
    for(int i = 0, t = 0; i < A.size(); i++){
        t = A[i] - t;
        if(i < B.size()) t -= B[i];
        C.push_back((t + 10) % 10);
        if(t < 0) t = 1;
        else t = 0;
    }
    while(C.size() > 1 && C.back() == 0) C.pop_back();
    return C;
}

int main(){
    string a, b;
    vector<int> A, B;
    cin >> a >> b;
    for(int i = 0; i < a.size(); i++) A.push_back(a[i] - '0');
    for(int i = 0; i < b.size(); i++) B.push_back(b[i] - '0');
    if(cmp(A, B)){
        auto C = sub(A, B);
        for(int i = C.size(); i >= 0; i--) printf("%d", C[i]);
    }
    else{
        auto C = sub(B, A);
        for(int i = C.size(); i >= 0; i--) printf("%d", C[i]);
    }
}