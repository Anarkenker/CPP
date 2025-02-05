#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    char a[8];
    int ans[7]={0};
    for(int i=0;i<7;i++){
        ans[i]++;
    }
    ans[1]--;
    for(int i=0;i<8;i++){
        cin>>a[i];
        if(a[i]=='n'){
            ans[0]++;
        }
        if(a[i]=='o'){
            ans[1]++;
        }
        if(a[i]=='w'){
            ans[2]++;
        }
        if(a[i]=='c'){
            ans[3]++;
        }
        if(a[i]=='d'){
            ans[4]++;
        }
        if(a[i]=='e'){
            ans[5]++;
        }
        if(a[i]=='r'){
            ans[6]++;
        }
    }
    for(int i=0;i<7;i++){
        if(ans[i]!=2){
            cout<<"I AK IOI";
            return 0;
        }
    }
    cout<<"happy new year";
    return 0;
}