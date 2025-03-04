#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
int ju(int a, int b)
{
    if(a != b){
        if(a == 0){
            if(b == 2 || b == 3){
                return 1;
            }
            else{
                return 0;
            }
        }
        if(a == 1){
            if(b == 0 || b == 3){
                return 1;
            }
            else{
                return 0;
            }
        }
        if(a == 2){
            if(b == 1 || b == 4){
                return 1;
            }
            else{
                return 0;
            }
        }
        if(a == 3){
            if(b == 2 || b == 4){
                return 1;
            }
            else{
                return 0;
            }
        }
        if(a == 4){
            if(b == 0 || b == 1){
                return 1;
            }
            else{
                return 0;
            }
        }
    }
    return 2;
}
int main()
{
    int N, NA, NB;
    cin >> N >> NA >> NB;
    vector<int> na(NA);
    vector<int> nb(NB);
    int pa = 0, pb = 0, cnta = 0,cntb = 0;
    for(int i = 0;i < NA; i++){
        cin >> na[i];
    }
    for(int i = 0;i < NB; i++){
        cin >> nb[i];
    }
    for(int i = 0;i < N; i++){
        if(ju(na[pa], nb[pb]) == 0){
            cntb++;
        }
        if(ju(na[pa], nb[pb]) == 1){
            cnta++;
        }
        pa++;
        pb++;
        if(pa == NA ){
            pa = 0;
        }
        if(pb == NB ){
            pb = 0;
        }
    }
    cout<<cnta<<" "<<cntb;
    return 0;
}