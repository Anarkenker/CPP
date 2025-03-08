#include<stdio.h>
#include<string.h>
int isprime(int n)
{
    int i,ans=1;
    if(n==1||n==0) ans=0;
    if(n==2) ans=1;
    if(n>2){
        for(i=2;i<n;i++){
            if(n%i==0){
                ans=0;
                break;
            }
        }
    }
    return ans;
}
int main()
{
    char a[101];
    gets(a);
    int i,len=strlen(a),sum[101]={0},maxn=0,minn=101;
    for ( i = 0; i <len; i++){
        sum[a[i]-'a']++;
    }
    for ( i = 0;i<26;i++){
        if(maxn<sum[i]) maxn=sum[i];
        if(minn>sum[i]&&sum[i]!=0) minn=sum[i];
    }
    //printf("%c %c\n",max,min);
    int ans=maxn-minn;
    if(isprime(ans)==1) printf("Lucky Word\n%d",ans);
    else printf("No Answer\n0");
    return 0;
}