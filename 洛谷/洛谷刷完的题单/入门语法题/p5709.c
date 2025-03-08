#include<stdio.h>
#include<math.h>

int main()
{
    double t,m,s;
    scanf("%lf %lf %lf",&m,&t,&s);
    int left=floor(m-s/t);
    if (t==0)
    {
        printf("%d",0);
    }
    else if (t!=0)
    {
        if (left<=0)
        {
            printf("0");
        }
        else
        {
            printf("%d",left);
        }
        
    }
    return 0;
}