#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n,count=0,line=0,cl=0;
    cin>>n;
    for(int j=0;;j++){
        int ans;
        cin>>ans;
        count++;
        for(int k=0;k<ans;k++){
            if(count%2!=0){
                cout<<'0';
                line++;
            }
            else{
                cout<<'1';
                line++; 
            }
            if(line==n){
                cout<<endl;
                line-=n;
                cl++;
            }
        }
        if(cl==n){
            break;
        }
    }
    return 0;
}