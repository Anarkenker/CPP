#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i,count=1,j,k;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%02d",count);
            count++;
        }
        cout<<endl;
    }
    cout<<endl;
    int count2=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf("  ");
        }
        for(k=1;k<=i;k++){
            printf("%02d",count2);
            count2++;
        }
        cout<<endl;
    }
    return 0;
}