#include<stdio.h>
#include<string.h>

//以零结尾的一串字符
//0或'\0'是一样的，但是和'0'不同
//标志字符串的结束，但他不是字符串的一部分
//计算字符串长度的时候不包含这个0
//字符串以数组的形式存在，以数组或指针的形式访问
//更多的是以指针的形式
//string.h里有很多处理字符串的函数
//char *str="Hello",指的是有一个输出为Hello的字符串
//由双引号括起来的叫做字符串常量，
/*“Hello”会被编译器变成字符数组放在某处，
这个数组的长度是6，结尾还有表示结束的0；*/
//两个相邻的字符串常量会被自动连接起来
//不能用运算符对字符串做运算
//通过数组的方式可以遍历字符串
//这就是c语言的字符串
//处理字符串用指针，构造字符串用数组
//指针不需要&
int main(void)
{
    int i;
    char *s="Hello World";
    char *s2="Hello World";
    char s3[]="Hello World";
    printf("&i=%p\n",&i);
    printf("s=%p\n",s);
    printf("s2=%p\n",s2);
    printf("Here!s3[0]=%c\n",s3[0]);
    return 0;
}