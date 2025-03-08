//两个大数相加，A+B
/*核心算法
    c[i]+=a[i]+b[i];
    c[i+1]=c[i]/10;
    c[i]=c[i]%10;
*/
#include<stdio.h>
#include<string.h> 
char s1[505],s2[505];
int a[505],b[505],c[505];
int max(int n1,int n2)
{
    int ans;
    if (n1>n2) ans=n1;
    if (n1<n2) ans=n2;
    return ans;
}
int main(void)
{
    int la,lb,lc;
    scanf("%s",s1);
    scanf("%s",s2);
    la=strlen(s1);
    lb=strlen(s2);
    for (int i = 0; i <la; i++)//将字符转换为数字，并将字符转置便于计算
        a[la-i]=s1[i]-'0';
    for(int i = 0;i<lb;i++) 
        b[lb-i]=s2[i]-'0';
    lc=max(la,lb)+1;
    for(int i=1;i<=lc;i++){
        c[i]+=a[i]+b[i];
        c[i+1]=c[i]/10;
        c[i]=c[i]%10;
    }
    if(c[lc]==0&&lc>0) lc--;//删除前导0
    for(int i=lc;i>0;i--)
        printf("%d",c[i]);
    return 0;
}
