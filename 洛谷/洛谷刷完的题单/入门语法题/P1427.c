#include<stdio.h>
int main()
{
    int a[101];
    int i=0;
    for ( i = 0; i < 100; i++)
    {
        scanf("%d",&a[i]);
        if (a[i]==0)
        {
            break;
        }
        
    }
    int k;
    for ( k=i-1; k>=0; i--)
    {
        printf("%d ",a[k]);
    }
    return 0;
}