#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
void hanoi(int n, char F, char A, char T){
    if(n == 1){
        printf("Move %d from %c to %c\n", n, F, T);
        return;
    }
    hanoi(n - 1, F, T, A);
    printf("Move %d from %c tohh %c\n", n, F, T);
    hanoi(n - 1, A, F, T);
}
int main(){
    int n;
    char F, T, A;
    cin >> n >> F >> A >> T;
    hanoi(n, F, A, T);
    return 0;
}