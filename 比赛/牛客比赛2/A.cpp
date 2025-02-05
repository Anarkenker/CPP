#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a[7],flag=0;
    for(int i =0 ;i < 7;i++){
        cin>>a[i];
        if(a[i]==7||a[i]==4){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}