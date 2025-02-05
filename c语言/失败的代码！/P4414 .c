#include<stdio.h>

int main()
{
    int a,b,c;
    char words[3];
    
    
    
    int j=0;
    scanf("%d %d %d\n%c%c%c",&a,&b,&c,&words[0],&words[1],&words[2]);

    if (a>c)
    {
        int temp=a;
        a=c;
        c=temp;
    }
    if (a>b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    if (b>c)
    {
        int temp=b;
        b=c;
        c=temp;
    }
    //printf("%d %d %d\n",a,b,c);
    
    if (words[0]=='C')
    {
        int temp=a;
        a=c;
        c=temp;
        if (words[2]=='B')
        {
            int temp=b;
            b=c;
            c=temp;
            
        }
        
    }
    if (words[1]=='C')
    {
        int temp=b;
        b=c;
        c=temp;
        if (words[0]=='B')
        {
            int temp=a;
            a=c;
            c=temp;
        }
        
    }
    else if (words[0]=='B')
    {
        int temp=a;
        a=b;
        b=temp;
    }

    printf("%d %d %d\n",a,b,c);
    return 0;
}