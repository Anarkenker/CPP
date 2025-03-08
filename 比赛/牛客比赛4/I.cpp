#include<iostream>
#include<cstdio>
#include<string>

using namespace std;
int main(){
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        string str, str1 = "uwawauwa";
        int n;
        cin >> n >> str;
        int cnt = 0;
        for(int j = 0;; j++){
            if(str.find(str1)){
                int p = str.find(str1), flag = 0;
                int pos = p;
                while(p >= 0){
                    p--;
                    if(str[p] == 'u'){
                        flag = 1;
                        break;
                    }
                }
                if(flag == 1){
                    cnt++;
                }
                pos += str1.size();
                str = str.substr(pos);
            }
        }
    }
}