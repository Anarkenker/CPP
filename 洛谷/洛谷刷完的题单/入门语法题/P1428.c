#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[101],b[101];
    int ans=0;
    int i=0;
    int k=0;
    for ( k = 0; k <n; k++)
    {
        scanf("%d",&a[k]);
    }
    for ( i = 0; i < n; i++)
    {
        int j=0;
        ans=0;
        for ( j = 0; j < i; j++)
        {
            if (a[i]>a[j])
            {
              ans++; 
            }
            
        }
        printf("%d ",ans);
        
    }
    return 0;

    
}