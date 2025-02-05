
#include <stdio.h>

int main()
{
    int number;
    int sum = 0;
    int count = 0;
     scanf("%d",&number);
    do   
    {
    
        if (number !=-1)
        {
            sum+=number;
            count ++;
            printf("%d,%d\n",count, number);
            scanf("%d",&number);
        }
    }while(number!=-1);
    printf("%f\n",1.0*sum/count);
    return 0;
}