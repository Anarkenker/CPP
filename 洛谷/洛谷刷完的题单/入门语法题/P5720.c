#include<stdio.h>
#include<math.h>

int main()
{
    double a;
    scanf("%lf",&a);
    int i=0;
    for ( i = 0; a>1; i++)
    {
        a=floor(a/2)*1.0;        
    }
    i+=1;
    printf("%d",i);
    return 0;
}