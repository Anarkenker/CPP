#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int n, m;
vector<int> list(n);
vector<vector<int>> time(n, vector<int> (m));
vector<vector<int>> xu(n, vector<int> (m));
vector<int> step(n, 0);
vector<int> mac(m, 0);
int main()
{
    for(int i = 0; i < n; i++){
        cin >> list[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> xu[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> time[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            
        }
    }
}