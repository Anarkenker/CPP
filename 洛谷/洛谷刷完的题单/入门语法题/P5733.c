#include<stdio.h>
#include<string.h>
#define STLEN 101
int main(){
    char a[STLEN];
    fgets(a,STLEN,stdin);
    size_t len=strlen(a),i;
    for ( i = 0;i < len;i++){
        if (a[i]<='z'&&a[i]>='a'){
            a[i]-=32;
        }
    }
    puts(a);
    return 0;
}