#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    scanf("%d",&num);
    int *a;
    a=(int *)malloc(num*sizeof(int));
    int i=0;
    for ( i = 0; i < num; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int min=a[0];
    for ( i = 0; i <num; i++)
    {
        if (a[i]<min)
        {
            min=a[i];
        }
    }
    printf("%d",min);    
    return 0;
}