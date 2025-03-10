#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
#include<utility>
using namespace std;
int main(){
    string str;
    cin >> str;
    int k;
    cin >> k;
    int i;
    while(k){
        for(i = 0;; i++){
            if(str[i] > str[i + 1]){
                break;
            }
        }
        str.erase(i, 1);
        k--;
    }
    int len = 0;
    while(str[len] == '0' && len < str.size() - 1) len++;
    for(int i = len; i < str.size(); i++){
        cout << str[i];
    }
    return 0;
}