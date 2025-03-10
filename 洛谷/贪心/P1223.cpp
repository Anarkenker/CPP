#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
struct tim{
    int t, num;
};
bool cmp(tim a, tim b){
    if(a.t != b.t){
        return a.t < b.t;
    }
    else{
        return a.num <= b.num;
    }
}
int main(){
    int n;
    cin >> n;
    vector<tim> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].t;
        a[i].num = i + 1;
    }
    sort(a.begin(), a.end(), cmp);
    double sum = 0, timew = 0;
    for(int i = 0; i < n; i++){
        cout << a[i].num << " ";
        sum += timew;
        timew += a[i].t;
    }
    double ave = sum / n;
    cout << endl;
    printf("%.2lf", ave);
    return 0;
}