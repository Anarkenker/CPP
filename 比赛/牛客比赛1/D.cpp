#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++){
        long long n,a[100001];
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        if(n%2!=0){
            cout<<"No"<<endl;
        }
        if(n%2==0){
            long long flag1=0,flag2=0,cnt=1;
            flag1=flag2=a[0];
            for(int j=0;j<n;j++){
                if(a[j]!=flag1&&a[j]!=flag2){
                    flag2=a[j];
                    cnt++;
                }
            }
            //cout<<flag2<<"||"<<cnt<<endl;
            if(flag2!=a[0]&&cnt==2){
                int cnt1=0,cnt2=0;
                for(int j=0;j<n;j++){
                    if(a[j]==flag1){
                        cnt1++;
                    }
                    if(a[j]==flag2){
                        cnt2++;
                    }
                }
                if(cnt2==cnt1){
                    cout<<"Yes"<<endl;
                }
                else{
                    cout<<"No"<<endl;
                }
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}
