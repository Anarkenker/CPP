#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int A,B,C,D;
    if (x%2==0&&x>4&&x<=12)
    {
        A=1;    /* code */
        B=1;
        C=0;
        D=0;
    }
    else if ((x%2!=0&&(x>4&&x<=12))||(x%2==0&&(x>12||x<=4)))
    {
        /* code */A=0;
        B=1;
        C=1;
        D=0;
    }
    
    else if (x%2!=0&&(x<=4||x>12))
    {
        /* code */A=0;
        B=0;
        C=0;
        D=1;
    }
    printf("%d %d %d %d",A,B,C,D);
    return 0;
    
}