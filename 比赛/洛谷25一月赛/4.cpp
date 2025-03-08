#include<iostream>
#include<cstdio>
using namespace std;
int line1[100001],line2[100001];
int main()
{
    int n;
    cin>>n;
    int ans;
    int count1=0,count2=0;
    for(int i=0;i<n;i++){
        cin>>ans;
        if(ans<=15){
            line1[count1]=ans;
            count1++;
        }
        else if(ans>15){
            line2[count2]=ans;
            count2++;
        }
    }
    for(int i=0;i<count1;i++){
        cout<<line1[i]<<" ";
    }
    for(int i=0;i<count2;i++){
        cout<<line2[i]<<" ";
    }
    return 0;
}