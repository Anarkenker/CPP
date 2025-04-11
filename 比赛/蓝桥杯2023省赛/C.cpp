#include <bits/stdc++.h>

using namespace std;

string n;
vector<int> a;
int ans = 0;

vector<int> reverse(int m, int n){
    vector<int> c = a;
    for(int i = m, j = n; i <= n; i++, j--){
        c[i] = a[j];
    }
    return c;
}

bool compare(vector<int>& A, vector<int>& B){
    for(int i = A.size() - 1; i >= 0; i--){
        if(A[i] > B[i]){
            return true;
        }
        else if(A[i] < B[i]){
            return false;
        }
    }
    return false;
}

int main(){
    cin >> n;
    for(int i = 0; i < n.size(); i++){
        int num;
        num = n[i] - '0';
        a.push_back(num);
    }

    vector<int> b;
    for(int i = 0; i < n.size(); i++){
        for(int j = i + 1; j < n.size(); j++){
            b = reverse(i, j);
            if(compare(b, a)){
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}