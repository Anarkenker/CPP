#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
int main()
{
    char str[10000],str1[100];
    int q;
    cin>>q>>str;
    int ans,i=0,q3,p3;
    while(i<q){
        cin>>ans;
        if(ans==1){
            cin>>str1;
            strcat(str,str1);
            cout<<str<<endl;
            i++;
        }
        if(ans==2){
            cin>>q3>>p3;
            str[q3+p3]='\0';
            strcpy(str1,&str[q3]);
            strcpy(str,str1);
            cout<<str<<endl;
            i++;
        }
        if(ans==3){
            int a;
            cin>>a>>str1;
            strcat(str1,&str[a]);
            str[a]='\0';
            char in[1000];
            strcpy(in,str);
            strcat(in,str1);
            strcpy(str,in);
            cout<<str<<endl;
            i++;
        }
        if(ans==4){
            cin>>str1;
            char* po=strstr(str,str1);
            if(po!=NULL){
                cout<<po-str<<endl;
            }
            else{
                cout<<"-1"<<endl;
            }
            i++;
        }
    }
    return 0;
}