#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    char ans,flag='0';
    int i=0,count[40001]={0},wei=0,n;
    while(cin>>ans){
        if(ans!=flag){
            wei++;
            flag=ans;
        }       
        i++;
        count[wei]++;
        //cout<<wei<<"||"<<count[wei]<<endl;
    }
    n=sqrt(i+1);
    cout<<n<<" ";
    if(count[0]!=0){
        for(int j=0;;j++){
            if(count[j]!=0) cout<<count[j]<<" ";
            if(count[j]==0){
                break;
            }
        }
    }
    else{
        cout<<"0 ";
        for(int j=1;;j++){
            if(count[j]!=0) cout<<count[j]<<" ";
            if(count[j]==0){
                break;
            }
        }      
    }
    return 0;
}