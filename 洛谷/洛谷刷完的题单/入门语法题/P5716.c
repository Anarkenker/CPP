#include<stdio.h>
int main()
{
    int y,m;

    scanf("%d %d",&y,&m);
    if (y%100!=0)
    {
        /* code */
    
    
        if (y%4==0)
        {
            if (m==2)
            {
                printf("29");

            }
            else if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
            {
                printf("31");
            }
            else
            {
                printf("30");
            }
        }
        if (y%4!=0)
        {
            if (m==2)
            {
                printf("28");

            }
            else if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
            {
                printf("31");

            }
            else
            {
                printf("30");
            }
        }
    }    



    if (y%100==0)
    {
        /* code */
    
    
        if (y%400==0)
        {
            if (m==2)
            {
                printf("29");

            }
            else if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
            {
                printf("31");
            }
            else if (m==4 || m==6 || m==9 || m==11)
            
            {
                printf("30");
            }
        }
        if (y%400!=0)
        {
            if (m==2)
            {
                printf("28");

            }
            else if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
            {
                printf("31");

            }
            else if (m==4 || m==6 || m==9 || m==11)
            {

                printf("30");
            }
        }
    } 

    return 0;
}