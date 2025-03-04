#include<iostream>
#include<cstdio>
using namespace std;
bool shai(int n)
{
    if(n%2==0){
        return true;
    }
    else{
        return false;
    }
}
bool isprime(int n)
{
    if(n==2){
        return true;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main()
{
    int N;
    cin>>N;
    for(int i=4;i<=N;i++){
        if(shai(i)){
            for(int j=2;j<=i/2;j++){
                if(isprime(j)&&isprime(i-j)){
                    cout<<i<<"="<<j<<"+"<<i-j<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}