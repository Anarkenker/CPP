#include<iostream>
#include<cstdio>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
struct point{
    int x, y, z;
};
bool cmp(point s1, point s2){
    return s1.z < s2.z;
}
int main(){
    int N;
    cin >> N;
    vector<point> a(N);
    for(int i = 0; i < N; i++){
        cin >> a[i].x >> a[i].y >> a[i].z;
    }
    sort(a.begin(), a.end(), cmp);
    double dis = 0;
    for(int i = 0; i < N - 1; i++){
        dis += sqrt(pow(a[i].x -a[i + 1].x, 2) + pow(a[i].y -a[i + 1].y, 2) + pow(a[i].z -a[i + 1].z, 2));
    }
    printf("%.3lf", dis);
    return 0;
}