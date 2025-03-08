#include<stdio.h>
int main()
{
    int n=1,k;
    double sum=0;
    scanf("%d",&k);
    for(n=1;;n++){
        sum+=(1.0/n);
        if(sum>k*1.0){
            break;
        }
    }
    printf("%d",n);
    return 0;
}