#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    double n,way,sum;
    cin>>n;
    way=2;
    int i;
    for(i=1;;i++){
        sum+=way;
        way*=0.98;
        if(sum>=n){
            cout<<i;
            break;
        }
    }
    return 0;
}