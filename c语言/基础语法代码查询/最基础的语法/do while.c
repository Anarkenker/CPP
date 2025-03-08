#include <stdio.h>

int main()
{
    int x;
    int n=0;
    scanf("%d",&x);
    do
    {
        n++;
        x /=10;
    } while (x>0/* condition */);
    printf("%d",n);
    return 0;
}