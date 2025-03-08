#include<iostream>
#include<vector>
using namespace std;

int rota90(vector<vector<char>> A, vector<vector<char>> B) {
    int n = A.size();
    vector<vector<char>> temp(n, vector<char>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            temp[i][j] = A[n - j - 1][i];
        }
    }
    if(temp == B) return 1;
    return 0;
}

int rota180(vector<vector<char>> A, vector<vector<char>> B) {
    int n = A.size();
    vector<vector<char>> temp(n, vector<char>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            temp[i][j] = A[n - i - 1][n - j - 1];
        }
    }
    if(temp == B) return 1;
    return 0;
}

int rota270(vector<vector<char>> A, vector<vector<char>> B) {
    int n = A.size();
    vector<vector<char>> temp(n, vector<char>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            temp[i][j] = A[j][n - i - 1];
        }
    }
    if(temp == B) return 1;
    return 0;
}

int reflect(vector<vector<char>> A, vector<vector<char>> B) {
    int n = A.size();
    vector<vector<char>> temp = A;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n / 2; j++) {
            swap(temp[i][j], temp[i][n - j - 1]);
        }
    }
    if(temp == B) return 1;
    return 0;
}

int com(vector<vector<char>> A, vector<vector<char>> B) {
    int n = A.size();
    vector<vector<char>> temp = A;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n / 2; j++) {
            swap(temp[i][j], temp[i][n - j - 1]);
        }
    }
    if(rota90(temp, B) == 1 || rota180(temp, B) == 1 || rota270(temp, B) == 1) {
        return 1;
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    vector<vector<char>> A(n, vector<char>(n));
    vector<vector<char>> B(n, vector<char>(n));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }

    if(rota90(A, B) == 1) {
        cout << "1";
    } else if(rota180(A, B) == 1) {
        cout << "2";
    } else if(rota270(A, B) == 1) {
        cout << "3";
    } else if(reflect(A, B) == 1) {
        cout << "4";
    } else if(com(A, B) == 1) {
        cout << "5";
    } else if(A == B) {
        cout << "6";
    } else {
        cout << "7";
    }

    return 0;
}