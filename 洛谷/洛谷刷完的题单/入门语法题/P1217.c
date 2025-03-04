#include<stdio.h>
#include<math.h>
int prime(int n){
    int i,ans=1;
    if(n==0 || n==1){
        ans=0;
    }
    else if(n==2){
        ans=1;
    }
    else{
        for(i=2;i<=sqrt(n);++i){
            if(n%i==0){
                ans=0;
                break;
            }
        }
    }
    return ans;
}
int re(int n){
    int i,a[20],k=0,flag=1;
    for(i=0;i<20;++i){
        a[i]=n%10;
        n/=10;
        ++k;
        if(n==0){
            break;
        }
    }
    for(i=0;i<=k/2;++i){
        if(a[i]!=a[k-i-1]){
            flag=0;
            break;
        }
    }
    return flag;
}
int len(int n){
    if((n>=1000 && n<=10000 )||( n>=100000 && n<=1000000)){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int a,b,i;
    scanf("%d%d",&a,&b);
    if(b>9999999){
        b=9999999; 
    }
    if(a==2){
        printf("2\n");
        ++a;
    }
    if(a%2==0){
        ++a;
    }
    if(b%2==0){
        --b;
    }
    for(i=a;i<=b;i+=2){
        if(len(i)%2==0){
            continue;
        }
        if(re(i)==0){
            continue;
        }
        if(prime(i)==0){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}