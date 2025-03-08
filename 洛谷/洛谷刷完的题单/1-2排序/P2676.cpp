#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
bool cmp(long long s1, long long s2){
    return s1 > s2;
}
int main(){
    long long N, B;
    cin >> N >> B;
    long long a[20000];
    for(long long i = 0; i < N; i++){
        cin >> a[i];
    }
    sort(a, a + N, cmp);
    long long sum = 0;
    for(int i = 0; i < N; i++){
        sum += a[i];
        if(sum >= B){
            cout << i + 1;
            break;
        }
    }
    return 0;
}