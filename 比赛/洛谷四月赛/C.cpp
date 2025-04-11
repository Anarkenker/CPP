#include <bits/stdc++.h>

using namespace std;
int n;
int jiao = 0, leng = 0, zhou = 0;

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        int j, l, z;
        cin >> j >> l >> z;
        jiao += (8 - j);
        leng += (12 - l);
        zhou += (1 - z);        
    }

    int ans1 = floor(jiao / 8);
    int ans2 = floor(leng / 12);
    int ans3 = floor(zhou / 1);
    vector<int> b = {ans1, ans2, ans3};
    sort(b.begin(), b.end());
    cout << b[0];
    return 0;
}