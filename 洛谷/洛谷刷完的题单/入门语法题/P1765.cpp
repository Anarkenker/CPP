#include<iostream>
#include<cstdio>
#include<string>
#include<cctype>
#include<cstring>
using namespace std;
int num[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
int main()
{
    int cnt=0;
    string str1;
    getline(cin,str1);
    for(size_t i=0;i<str1.length();i++){
        if(isalpha(str1[i])){
            cnt+=num[str1[i]-'a'];
        }
        if(isblank(str1[i])){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}