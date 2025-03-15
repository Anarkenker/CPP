#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m ; i++){
        int s;
        cin >> s;
        cout << a[s - 1] << endl;
    }
    return 0;
}