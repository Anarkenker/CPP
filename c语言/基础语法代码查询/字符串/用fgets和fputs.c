#include<stdio.h>
#define STLEN 10
int main()
{
    char words[STLEN];
    puts("Enter strings (empty line to quit):");
    while (fgets(words,STLEN,stdin)!=NULL && words[0]!='\n')//最多读取STLEN-1个字符。
    {
        fputs(words,stdout);
    }
    puts("Done.");    
}