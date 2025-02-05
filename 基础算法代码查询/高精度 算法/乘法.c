#include<stdio.h>
#include<string.h>
/*核心算法：
c[i+j-1]+=a[i]*b[j];
c[i+j]+=c[i+j-1]/10;
c[i+j-1]%=10;*/    
char s1[10000],s2[10000];
int a[10000],b[10000],c[10000];
int main()
{
    int la,lb,lc;
    scanf("%s",s1);
    scanf("%s",s2);
    la=strlen(s1);
    lb=strlen(s2);
    for(int i=0;i<la;i++)
        a[la-i]=s1[i]-'0';
    for(int i=0;i<lb;i++)
        b[lb-i]=s2[i]-'0';
    lc=la+lb;
    for(int i=1;i<=la;i++){ 
        for(int j=1;j<=lb;j++){
            c[i+j-1]+=a[i]*b[j];
            c[i+j]+=c[i+j-1]/10;
            c[i+j-1]%=10;
        }
    }
    while(c[lc]==0&&lc>1) lc--;
    for(int i=lc;i>0;i--){
        printf("%d",c[i]);
    }
    return 0;
}