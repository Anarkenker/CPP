#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a;
    int number;
    printf("1110");
    scanf("%d",&number);
    int i;
    a=(int*)malloc(number*sizeof(int));//malloc返回的是void*转换成int*//代表的是这个地址。
    
    for ( i = 0; i < number; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = number-1; i>0; i--)
    {
        printf("%d",a[i]);
    }
    free(a);
    return 0;
}