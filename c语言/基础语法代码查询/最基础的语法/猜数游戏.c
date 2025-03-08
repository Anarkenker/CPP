 #include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*让使用者猜计算机想出来的是什么数字*/
int main()
{
    srand(time(0));
    int number=rand()%100+1;
    int count=0;
    int a;
    scanf("%d",&a);
    count++;
    while(a!=number)//用do while也可以使用这个
    {
        count++;
        if (a>number)
        {
            /* code */printf("你的数大了\n");
        }
        else if (a<number)
        {
            /* code */printf("你的数小了\n");
        }
        scanf("%d",&a);
    }
    printf("你猜对了\n，猜了%d次",count);
    return 0;
}