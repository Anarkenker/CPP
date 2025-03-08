#include<stdio.h>

int zhishu(int x);

int main()
{
    int a[101], n;
    scanf("%d", &n);
    int i = 0;
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        
    }
    for ( i = 0; i < n; i++)
    {
        if (zhishu(a[i]) == 0 &&a[i]!= 1||a[i] == 2)
        {
            printf("%d ", a[i]);
        }
        
    }
    return 0;
    
}
int zhishu(int x)
{
    int flag = 0;
    int i;
    for (i = 2; i < x; i++)
    {
        if (x % i!= 0)
        {
            flag = 0;
            
        }
        else 
        {
            flag = 1;
            break;
        }
    }
    return flag;
}
    