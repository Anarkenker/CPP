#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    gets(a);
    int ans=0,len=strlen(a),i;
    for ( i = 0; i <len; i++){
        if(a[i]!=' ') ans++;
    }
    printf("%d",ans);
    return 0;
}