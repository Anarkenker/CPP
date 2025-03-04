#include<stdio.h>
int main()
{
    int height[10];
    int reach;
    int i=0;
    for ( i = 0; i <10; i++)
    {
        scanf("%d ",&height[i]);
    }
    scanf("%d",&reach);
    reach+=30;
    int j=0;
    int ans=0;
    for ( j = 0; j < 10; j++)
    {
        if (height[j]<=reach)
        {
            ans++;
        }
        
    }
    printf("%d",ans);
    return 0;
}