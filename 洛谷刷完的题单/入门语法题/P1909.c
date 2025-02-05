#include<stdio.h>
#include<math.h>
int main()
{
    int m[3];
    int num[3];
    int n;
    scanf("%d",&n);
    int i;
    int sum[3];
    int min=100000000000000;
    double tn[3];
    for ( i = 0; i < 3; i++)
    {
        scanf("%d %d",&num[i],&m[i]);
        tn[i]=ceil(n*1.0/num[i]);
        sum[i]=tn[i]*m[i];
        if (sum[i]<min)
        {
            min=sum[i];
        }
        
    }
    printf("%d",min);
    return 0;
}
    
    