#include<iostream>
#include<cstdio>
#include<vector>
#include<cstdlib>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int cun[100000] = {0};
    for(int i = 0; i < n - 1; i++){
        int cha = abs(a[i] - a[i + 1]);
        cun[cha]++;
    }
    int flag = 1;
    for(int i = 1; i < n; i++){
        if(cun[i] == 0){
            flag = 0;
            break;
        }
    }
    if(flag > 0){
        cout << "Jolly";
    }
    else{
        cout << "Not jolly";
    }
    return 0;
}