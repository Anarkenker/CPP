#include<iostream>
using namespace std;
int a[12];
int main(){
    a[11] = 1;
    for(int i = 10; i >= 1; i--){
        a[i] = (a[i + 1] + 1) * 2;
    }
    cout << a[1];
    return 0;
}