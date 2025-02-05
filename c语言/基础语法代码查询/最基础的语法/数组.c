#include<stdio.h>
int isPrime(int x,int knownprimes[],int numberofKnownprimes);
int main(void)
{
    

    int prime[100]={2};

    int count=1;
    int i=3;
    while (count<number)
    {
        if (isPrime(i,prime,count))

        {
            prime[count++]=i;
        }
        i++ ;
    }

    for ( i = 0; i < number; i++)
    {
        printf("%d",prime[i]);
        if ((i+1)%5) printf("\t");
        else printf("\n");
    }
    return 0;
    
}
int isPrime(int x,int knownprimes[],int numberofKnownprimes)
{
    int ret=1;
    int i;
    for ( i = 0; i < numberofKnownprimes;i++)
    {
        if (x % knownprimes[i]==0)
        {
            ret=0;
            break;
        }
        
    }
    return ret;
}