#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int cnt = str1[0]-'A'+1,cnt2 = str2[0]-'A'+1;
    for(size_t i = 1;i < str1.length();i++){
        cnt *= (str1[i]-'A'+1);
    }
    for(size_t i = 1;i < str2.length();i++){
        cnt2 *= (str2[i]-'A'+1);
    }
    if(cnt%47==cnt2%47){
        cout<<"GO";
    }
    else{
        cout<<"STAY";
    }
    return 0;
}