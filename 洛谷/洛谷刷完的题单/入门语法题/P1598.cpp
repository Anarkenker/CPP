#include<iostream>
#include<cstdio>
using namespace std;
int a[26];
int main()
{
    string str;
    for(int j=0;j<4;j++){
        getline(cin,str);
        for(size_t i=0;i<str.length();i++){
            if(str[i]>='A'&&str[i]<='Z'){
                a[str[i]-'A']++;
            }
        }        
    }
    //cout<<a[0]<<endl;
    int max=0;
    for(int i=0;i<26;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    //cout<<max<<endl;
    for(int i=max;i>0;i--){//本题的难点就是控制这个的输出
        for(int j=0;j<26;j++){
            if(a[j]<i){
                cout<<"  ";
            }
            if(a[j]>=i){
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    for(int i=0;i<26;i++){
        cout<<char(i+'A')<<" ";
    }
    return 0;
}