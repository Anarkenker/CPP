#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
    string str1,str2,str3=" ";
    cin>>str1;
    getchar();
    getline(cin,str2);
    str1=str3+str1+str3;
    str2=str3+str2;
    for(int i=0;i<(int)str1.length();i++){
        str1[i]=tolower(str1[i]);
    }
    for(int j=0;j<(int)str2.length();j++){
        str2[j]=tolower(str2[j]);
    }
    int po=str2.find(str1);
    int pos=po,cnt=0;    
    if(pos==-1){
        cout<<"-1";
        return 0;
    }
    while(po!=-1){
        cnt++;
        po=str2.find(str1,po+1);
    }
    cout<<cnt<<" "<<pos;
    return 0;
}