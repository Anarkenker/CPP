#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
//b,o,y//g,i,r,l//
bool tf[255];
int main()
{
    string str1;
    getline(cin,str1);
    int cntb=0,cntg=0;
    for(int i=0;i<str1.length();i++){
        if(str1[i]=='b'||str1[i+1]=='o'||str1[i+2]=='y'){
            cntb++;
        }
        if(str1[i]=='g'||str1[i+1]=='i'||str1[i+2]=='r'||str1[i+3]=='l'){
            cntg++;
        }
    }
    cout<<cntb<<endl<<cntg;
    return 0;
}