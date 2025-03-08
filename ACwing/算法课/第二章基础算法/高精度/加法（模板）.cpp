#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
using namespace std;
const int N = 1e6 + 10;
vector<int> add(vector<int>& A, vector<int>& B){
    vector<int> C;
    int t = 0;
    if(A.size() < B.size()) return add(B, A);
    for(int i = 0; i < A.size(); i++){
        t += A[i];
        if(i < B.size()) t += B[i];
        C.push_back(t % 10);
        t /= 10;
    }
    if(t) C.push_back(t);
    return C;
}

int main(){
    string a, b;
    vector<int> A, B;
    cin >> a >> b;
    for(int i = 0; i < a.size(); i++){
        A.push_back(a[i] - '0');
    }
    for(int i = 0; i < b.size(); i++){
        B.push_back(b[i] - '0');
    }
    vector<int> C = add(A, B);
    for(int i = 0; i < C.size(); i++){
        cout << C[i];
    }
    cout << endl;
    return 0;
}
vector<int> add(vector<int>& A, vector<int>& B){
    vector<int> C;
    int t = 0;
    if(A.size() < B.size()) return add(B, A);
    for(int i = 0; i < A.size(); i++){
        t += A[i];
        if(i < B.size()) t += B[i];
        C.push_back(t % 10);
        t /= 10; 
    }
    if(t) C.push_back(t);
    return C;
}

vector<int> add(vector<int>& A, vector<int>& B){
    if(A.size() < B.size()) return add(B, A);
    vector<int> C;
    int t = 0;
    for(int i = 0; i < A.size(); i++){
        t += A[i];
        if(i < B.size()) t += B[i];
        C.push_back(t % 10);
        t /= 10;
    }
    if(t) C.push_back(t);
    return C;
}