#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
const long long MOD = 1e9+7;
void multiply(vector<vector<long long>>& A, vector<vector<long long>>& B, vector<vector<long long>>& result) {
    long long n = A.size();
    vector<vector<long long>> temp(n, vector<long long>(n, 0));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                temp[i][j] = (temp[i][j] + A[i][k] * B[k][j]) % MOD;
            }
        }
    }
    result = temp;
}
void power(long long n, vector<vector<long long>>& result)
{
    vector<vector<long long>>ini = {
        {1, 1}, 
        {1, 0}
    };
    vector<vector<long long>>feb = {
        {1}, 
        {0}
    };

    while(n > 0){
        if(n & 1){
            multiply(ini, feb, feb);
        }
        multiply(ini, ini, ini);
        n = n >> 1;
    }
    result = feb;
}
int main()
{
    long long n;
    cin >> n;
    vector<vector<long long>>ans(2,vector<long long>(1,0));
    power(n, ans);
    long long a = ans[1][0];
    cout<<a<<endl;
    return 0;
}