#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    vector<int> an(n);
    for(int i = 0; i < n; i++){
        cin >> an[i];
    }
    int cnt = 0;
    do{
        if(cnt == m){
            break;
        }
        cnt++;
    }while(next_permutation(an.begin(), an.end()));
    for(int i = 0; i < n; i++){
        cout << an[i] << " ";
    }
    return 0;
}