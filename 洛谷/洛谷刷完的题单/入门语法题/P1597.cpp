#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    char s1,s2;
    int a[3]={0};
    while(scanf("%c:=%c;",&s1,&s2)==2){
        if(s2>='0'&&s2<='9'){
            a[s1-'a']=s2-'0';
        }
        else{
            a[s1-'a']=a[s2-'a'];
        }
    }
    cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<" ";
    return 0;
}