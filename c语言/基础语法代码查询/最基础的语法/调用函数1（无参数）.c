#include <stdio.h>
int cheer()
{
    printf("cheer\n");
    return 1;
}
int main()
{
    int n = cheer();//函数需要加（）不加（）调用不了函数
    printf("%d", n);
    return 0;
}