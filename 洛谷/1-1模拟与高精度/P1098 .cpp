#include<iostream>
#include<cstdio>
#include<string>
#include<cctype>
using namespace std;
string str;
int main()
{
    int p1, p2, p3;
    cin >> p1 >> p2 >> p3;
    cin >> str;
    int len = str.size();
    for(int i = 0; i < len; i++){
        if(str[i] == '-' && str[i - 1] + 1 < str[i + 1] && ((isalpha(str[i - 1]) && isalpha(str[i + 1])) || (isdigit(str[i - 1]) && isdigit(str[i + 1])))){
            string str1;
            for(int j = 1; j < str[i + 1] - str[i - 1]; j++){
                
                for(int k = 0; k < p2; k++){
                    if(p1 == 1){
                        str1 += tolower(str[i - 1] + j);
                    }
                    if(p1 == 2){
                        str1 += toupper(str[i - 1] + j);
                    }
                    if(p1 == 3){
                        str1 += '*'; 
                    }
                }
            }
            if(p3 == 1){
                str.replace(i, 1, str1);
            }
            else if(p3 == 2){
                string str2;
                int len1 = str1.size() - 1;
                for(int c = 0; c <= len1; c++){
                    str2 += str1[len1-c];
                }
                str1 = str2;
                str.replace(i, 1, str2);
            }
        }
        else if(str[i] == '-' && str[i - 1] + 1 == str[i + 1]){
            str.erase(i, 1);
        }
        len = str.size();
    }
    cout << str;
    return 0;
}