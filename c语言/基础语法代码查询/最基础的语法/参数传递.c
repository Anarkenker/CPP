#include<stdio.h>
void cheer(int i)
{
    printf("Cheer%d\n",i);
}
int main()
{
    double f =10;
    scanf("%lf",&f);
    cheer(f);//这里f被转换为整数
    return 0;
}