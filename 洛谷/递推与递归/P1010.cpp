#include<iostream>
#include<string>
#include<cmath>
using namespace std;
string dfs(int num){
    string a;
    if(num == 0) return ""; 
    int habit = log2(num);
    num -= habit;
    if(num != 0){
        if(habit == 1){
            return "2";
        }
        else{
            a += "(" + dfs(habit) + "+)";
        }
    }
    else{
        a += "(" + dfs(habit) + ")";
    }
    return a;
}
int main(){
    int n;
    cin >> n;
    cout << dfs(n);
    return 0;
}