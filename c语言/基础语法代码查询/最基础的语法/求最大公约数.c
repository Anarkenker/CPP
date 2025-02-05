#include <stdio.h>//枚举法已经会了，在这里就不列举了，用辗转相除做

    int main()
    {
        int a,b;
        int t;
        scanf("%d %d",&a,&b);
        while(b!=0)
        {
            t=a%b;
            a=b;
            b=t;
            printf("a=%d,b=%d,t=%d\n",a,b,t);
        }
        printf("gcd=%d\n",a);
    }
