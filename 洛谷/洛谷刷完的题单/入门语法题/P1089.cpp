#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    int sum=0,ans=1,X[12]={0},cun=0,tsum=0;;
    int b[12],j=0;
    for(int i=0;i<12;i++){
        cin>>b[i];
        sum+=300-b[i];
        //printf("xxx%d",sum);
        if(sum>=100){
            cun+=sum/100;
            sum%=100;
        }
        else if(sum<0){
            ans=0;
            X[j]=-i-1;
            j++;
        }
    }
    if(ans==0) cout<<X[0];
    else if(ans==1){
        tsum+=sum+cun*120;
        cout<<tsum;
    }
    return 0;
}