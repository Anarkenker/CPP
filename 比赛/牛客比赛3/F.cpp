#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T>0){
        T--;
        int n,a,b,c;
        cin>>n>>a>>b>>c;
        if(a + b + c < n){
            cout<<"No"<<endl;
        }
        else if(a + b + c > 2 * n||a>n||b>n||c>n){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}