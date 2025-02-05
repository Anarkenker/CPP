#include <stdio.h>
int main()
{
    int i;
    char c;
    scanf("%da%c",&i,&c);//如果两个数据中间输入a，那么不识别a，不进入数据
    printf("i=%d,c=%d,c=%c\n",i,c,c);
    return 0;
}