#include<stdio.h>
#include<iostream>
#include<cmath>
#include<stdlib.h>
#include<string.h>
#include<stack>
using namespace std;
stack<char>p;
char a[10005];
int countp[4];
int maxp[4];
int mem[4];
int main(){
    cin >> a;
    int type;
    cin >> type;
    int cnt = 0;
    for(int i=0;i<(int)strlen(a);++i){
        p.push(a[i]);
        if(p.size() == 1 && 'A' <= p.top() && p.top() <= 'Z'){
            p.pop();
            cnt++;
        }
        else if(p.size() == 1 && p.top() == '\''){
            p.pop();
        }
        else if(p.top() == ')'){
            while(!p.empty())p.pop();
            cnt++;
        }
    }
    int mode = 0;
    for(int i=0;i<(int)strlen(a);++i){
        if(a[i] == '('){
            mode = 1;
            continue;
        }
        else if(a[i] == ')'){
            mode = 0;
            continue;
        }
        else if(a[i] == '\'')continue;
        if(a[i] == 'L' && a[i + 1] == '\''){
            mem[1]++;
        }
        else if(a[i] == 'L' && a[i + 1] != '\''){
            mem[0]++;
        }
        else if(a[i] == 'R' && a[i + 1] == '\''){
            mem[3]++;
        }
        else if(a[i] == 'R' && a[i + 1] != '\''){
            mem[2]++;
        }
        if(mode == 0 || a[i + 1] == ')' || (a[i + 1] == '\'' && a[i + 2] == ')')){
            for(int j=0;j<4;++j){
                if(mem[j] == 0){
                    if(countp[j] > maxp[j])maxp[j] = countp[j];
                    countp[j] = 0;
                }
                else if(mem[j] == 1)countp[j] += mem[j];
            }
            for(int i=0;i<4;++i)mem[i] = 0;
        }
    }
    for(int i=0;i<4;++i){
        if(countp[i] > maxp[i])maxp[i] = countp[i];
    }
    cout << cnt << endl;
    if(type == 1){
        for(int i=0;i<4;++i){
            cout << maxp[i] << " ";
        }
    }
    return 0;
}