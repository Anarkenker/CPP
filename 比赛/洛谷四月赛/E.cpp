#include <bits/stdc++.h>

using namespace std;

int m, n;

int detacha(int x){
    vector<int> A;
    while(x){
        A.push_back(x % 10);
        x /= 10;
    } 
    int sum = 0;
    for(int i = 0; i < A.size(); i++){
        sum += A[i];
    }
    return sum;
}

int main(){
    cin >> m >> n;
    vector<int> a;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        if(x % 10 != detacha(x) % 10){
            a.push_back(x);
        }
    }
    while(!a.empty()){
        for(const auto it : a){
            cout << it << endl;
        }
        return 0;
    }
    cout << "None" << endl;
    return 0;

}