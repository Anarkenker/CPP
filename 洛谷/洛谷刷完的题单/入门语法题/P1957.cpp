#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;
int weishu(int n)
{
    int ans=0;
    if(n<0){
        ans++;
        n=-n;
    }
    if(n==0){
        return 1;
    }
    while(n>0)
    {
        n/=10;
        ans++;
    }
    return ans;
}
int main()
{
    int n,q1,q2,ans;
    char ch;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>q1;
        if(cin.fail()){
            cin.clear();
            cin>>ch>>q1;
        }
        cin>>q2;
        if(ch=='a'){
            ans=q1+q2;
            cout<<q1<<"+"<<q2<<"="<<q1+q2<<endl<<weishu(q1)+weishu(q2)+2+weishu(ans)<<endl;
        }
        if(ch=='b'){
            ans=q1-q2;
            cout<<q1<<"-"<<q2<<"="<<q1-q2<<endl<<weishu(q1)+weishu(q2)+2+weishu(ans)<<endl;
        }
        if(ch=='c'){
            ans=q1*q2;
            cout<<q1<<"*"<<q2<<"="<<q1*q2<<endl<<weishu(q1)+weishu(q2)+2+weishu(ans)<<endl;
        }
    }
    return 0;
}