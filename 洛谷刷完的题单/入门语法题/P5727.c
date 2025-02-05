#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[1000];
    a[0]=n;
    int i=0;
    if (n!=1)
    {
        for ( i = 1;i<1000; i++)
        {
            if (n%2==0)
            {    
                a[i]=n/2;
                n/=2;
                //printf("%d %d\n",a[i],i);
            }
            else if (n%2!=0&&n!=1)
            {
                a[i]=(n*3+1);
                n=(n*3+1);
                //printf("%d %d\n",a[i],i);
            }
            if (n==1)
            {
                break;
            }
        }
    }
    //printf("%d\n",a[7]);
    int k=i;
    //printf("%d\n",i);'
    //for ( k = 0; k < i; k++)
    //{
       // printf("%d %d\n",a[k],k);
    //}
    for ( k = i;k>=0; k--)
    {
        printf("%d ",a[k]);
    }
    return 0;
}