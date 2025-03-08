#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);        
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
    if ((a+b)>c&&abs(a-b)<c)
    {


        //printf("%f %f %f\n",pow(a,2),pow(b,2),pow(c,2));
        if(round(pow(a,2)+pow(b,2))>round(pow(c,2)))
        {
            printf("Acute triangle\n");
        }
        if(round(pow(a,2)+pow(b,2))==round(pow(c,2)))
        {
            printf("Right triangle\n");
        }
        if( round(pow(a,2))+(pow(b,2))<round(pow(c,2)))
        {   
            printf("Obtuse triangle\n");
        }
        if((a==b)||(a==c)||(b==c))
        {
            printf("Isosceles triangle\n");
        }
        if (a==b&&b==c)
        {
            printf("Equilateral triangle\n");
        }
    }
    else
    {
        printf("Not triangle\n");
    }  
    return 0;
}