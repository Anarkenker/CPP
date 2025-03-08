#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> li(m);
    for(int i = 0; i < m; i++){
        cin >> li[i];
    }
    sort(li.begin(), li.end());
    for(int i = 0; i < m; i++){
        cout << li[i] <<" ";
    }
    return 0;
}