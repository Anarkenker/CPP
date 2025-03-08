#include<stdio.h>
int main()
{
    int n,x,ans=0,j;
    scanf("%d %d",&n,&x);
    for(int i=1;i<=n;i++){
        j=i;
        if(j<10&&j==x) ans++;
        while(j/10>0){
            if (j%10==x) ans++;
            j/=10;
            if(j/10==0&&j==x) ans++;
            //printf("%dd%d\n",ans,i);
        }
    }
    printf("%d",ans);
    return 0;
}