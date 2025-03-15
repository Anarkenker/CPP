#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int cnt = 1;
    for(int i = 0; i < n; i++){
        a[i] = cnt++;
    }
    int pos = 0;
    while(n){
        if(n == 1){
            cout << a[0];
            break;
        }
        else{
            pos = (pos + m - 1) % n;
            cout << a[pos] << " ";
            a.erase(a.begin() + pos);
            n--;
        }
    }
    return 0;
}