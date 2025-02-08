#include<iostream>
using namespace std;
void cheng(long long& m, long long& n, long long x){
    m = x;
    n = 1;
}
void jia(long long& m, long long& n, long long x){
    m = x - 1;
    n = 1;
}
void jian(long long& m, long long& n, long long x){
    m = x + 1;
    n = 1;
}
void chu(long long& m, long long& n, long long x){
    m = x * 2;
    n = 2;
}
int main(){
    long long x;
    cin >> x;
    char o;
    long long m, n;
    cin >> o;
    switch (o)
    {
    case '+': jia(m, n, x); break;
    case '-': jian(m, n, x); break;
    case '*': cheng(m, n , x); break;
    default: break;
    }
    cout << m << " " << n;
    return 0;
}