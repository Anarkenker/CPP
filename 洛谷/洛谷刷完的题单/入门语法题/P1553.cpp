#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int cnt=0;
    char po = '\0';
    for(int i=0;i<(int)str.length();i++){
        if(str[i]>='0'&&str[i]<='9'){
            cnt++;
        }
        else{
            po=str[i];
            break;
        }
    }
    int pos=cnt;
    cnt--;
    while(cnt>=0&&str[cnt]=='0') cnt--;
    if(cnt == -1){
        cout << '0';
    }
    else{
        for(int i=cnt;i>=0;i--){
            cout<<str[i];
        }
    }
    if(po=='\0'){
        return 0;
    }
    else if(po=='%'){
        cout<<po;
        return 0;
    }
    else if(po=='/'||po=='.'){
        cout<<po;
        pos++;
        if(po == '.'){
            while(str[pos]=='0'&&pos<(int)str.length()) pos++;
            if(pos == (int)str.length()){
                cout << '0';
                return 0;
            }
            for(int i=(int)str.length()-1;i>=pos;i--){
                cout<<str[i];
            }
        }
        else if(po == '/'){
            int r = str.length() - 1;
            while(str[r] == '0')r--;
            for(int i=r;i>=pos;--i){
                cout << str[i];
            }
        }
    }
    return 0;
}