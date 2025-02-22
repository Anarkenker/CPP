#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<map>
using namespace std;
int main(){
    string race;
    int N, F;
    cin >> N >> F;
    cin >> race;
    map<string, int> moo;
    for(int i = 0; i < N; i++){
        if(race[i] == race[i + 1]){
            string in; 
            in += race[i] + race[i + 1];
            moo[in] = 1;
        }
    }
}