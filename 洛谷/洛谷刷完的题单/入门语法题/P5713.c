#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int local=5*x;
    int luogu=11+3*x;
    if (local<luogu)
    {
        printf("Local");
    }
    if (local>luogu)
    {
        printf("Luogu");
    }
    return 0;
    
}