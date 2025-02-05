#include <stdio.h>
void cheer()
{
    printf("cheer\n");

}
int main()
{
    cheer();//函数需要加（）不加（）调用不了函数
    cheer;
    return 0;
}