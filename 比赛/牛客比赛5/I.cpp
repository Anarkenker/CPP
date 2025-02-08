#include<iostream>
using namespace std;
int main(){
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        int n, m;
        cin >> n >> m;
        if(n == 0 && m == 0){
            cout << "Yes" << endl;
        }
        else if(n == 0 || m == 0){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }
    return 0;
}