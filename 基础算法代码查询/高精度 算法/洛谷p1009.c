#include<stdio.h>
int main()
{
    int i,A[1005]={0},B[1005]={0},n,j;//B是储存阶乘的，然后A是和；
    scanf("%d", &n);
    A[0]=B[0]=1;
    for (i=2;i<=n;i++){
        for (j=0;j<100;j++)//每一轮回都会改变这个数的大小；
            B[j]*=i;
        for (j=0;j<100;j++)
            if (B[j]>9){
                B[j+1] += B[j]/10;
                B[j]%=10;
            }
        for (j=0;j<100;j++){
            A[j]+=B[j];
            if (A[j]>9) {
                A[j+1] += A[j]/10;
                A[j]%=10;
            }
        }
    }
    int k=100;
    while(A[k]==0&&k>=1) k--;  
    for (j=k;j>=0;j--) printf("%d", A[j]);
    return 0;
}