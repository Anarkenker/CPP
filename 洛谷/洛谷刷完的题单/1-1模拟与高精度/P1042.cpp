#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    char str[1000000];
    int i=0;
    for( i=0;;i++){
        cin>>str[i];
        if(str[i]=='E'){
            break;
        }
    }
    if(str[0]=='E'){
        cout<<"0:0"<<endl<<endl<<"0:0";
        return 0;
    }
    //cout<<str[21]<<endl;
    int cnta=0,cntb=0,cnts=0;
    for(int j=0;j<i;j++){
        if(str[j]=='W'){
            cnta++;
            //cout<<"a"<<cnta<<endl;
        }
        if(str[j]=='L'){
            cntb++;
            //cout<<"b"<<cntb<<endl;
        }
        cnts++;
        //cout<<cnts<<endl;
        if((cnta>=11||cntb>=11)&&abs(cnta-cntb)>=2){
            cout<<cnta<<":"<<cntb<<endl;
            cnta=cntb=0;
            cnts-=11;
        }
    }
    cout<<cnta<<":"<<cntb<<endl;
    //cout<<cnts<<endl;
    cout<<endl;
    cnts=cnta=cntb=0;
    for(int j=0;j<i;j++){
        if(str[j]=='W'){
            cnta++;
        }
        else if(str[j]=='L'){
            cntb++;
        }
        cnts++;
        if((cnta>=21||cntb>=21)&&abs(cnta-cntb)>=2){
            cout<<cnta<<":"<<cntb<<endl;
            cnta=cntb=0;
            cnts-=21;
        }
    }
    cout<<cnta<<":"<<cntb;
    //cout<<"i"<<i<<endl;
    return 0;
}