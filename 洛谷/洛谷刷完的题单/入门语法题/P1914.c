#include<stdio.h>
#include<string.h>
int main()
{
    char a[51];
    int n;
    size_t i=0;
    scanf("%d",&n);
    scanf("%s",a);
    for ( i = 0; i < strlen(a); i++){
        if (a[i]+n>'z'){
            a[i]=(a[i]+n)-'z'+'a'-1;
        }
        else{
            a[i]+=n;
        }
    }
    puts(a);
    return 0;
}