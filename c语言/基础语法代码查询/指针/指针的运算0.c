#include<stdio.h>
int main(void)
{
    int i[9]={1,2,3,4,5,6,7,8,9};
    int *p=i;
    printf("%lu",sizeof(i));
    printf("p=%p\n",p);
    printf("p+1=%p\n",p+3);
    p+=3;
    
    printf("%d",*p);
    return 0;
}