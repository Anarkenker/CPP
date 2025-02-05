#include<stdio.h>
#include<string.h>
int main()
{
    char word[2];
    char word1[8];
    scanf("%s",word);
    scanf("%7s",word1);//%s可以输出字符串，数字指的是读七个字符
    printf("%s##%s",word,word1);
    return 0;
}