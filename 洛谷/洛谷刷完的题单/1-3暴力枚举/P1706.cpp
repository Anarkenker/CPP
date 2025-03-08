#include<iostream>
#include<cstdio>
#include<iomanip>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> an;
    for(int i = 1; i <= n; i++){
        an.push_back(i);
    }
    do{
        for(int num : an){
            cout << setw(5) << num;
        }
        cout << endl;
    }while(next_permutation(an.begin(), an.end()));
    return 0;
}