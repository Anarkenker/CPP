#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i=0;
    int num=1;
    for ( i = 0; i <n; i++)
    {
        int j=0;
        for ( j=0; j < n-i; j++)
        {
            printf("%02d",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}