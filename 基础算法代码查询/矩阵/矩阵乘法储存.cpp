#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
void mul(vector<vector<long long>>& A, vector<vector<long long>>& B, vector<vector<long long>>& result)
{
    int n = A.size();
    vector<vector<long long>> temp(n,vector<long long>(n, 0));
    for(int i = 0;i < n; i++){
        for(int j = 0;j < n; j++){
            for(int k = 0;k < n; k++){
                temp[i][j] = temp[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    result = temp;
}
int main()
{
    
}