#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c=0;
    scanf("%d %d %d",&a,&b,&c);
    


   
    if (a > b) 
    {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a > c) 
    {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c) 
    {
        int temp = b;
        b = c;
        c = temp;
    }
    int i=1;
    for ( i = 1; i <= a; i++)
    {
        if (a%i==0&&c%i==0)
        {
            a=a/i;
            c=c/i;
            i=1;
            //printf("%d %d\n",a,c);
        }
        
        
    }
    printf("%d/%d",a,c);
    return 0;
    
}