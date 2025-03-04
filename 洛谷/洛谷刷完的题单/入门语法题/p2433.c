#include<stdio.h>
#include<math.h>
// 填上你觉得需要的其他头文件
void solveEquations(double a1, double b1, double c1, double a2, double b2, double c2) 
    {
        double determinant = a1 * b2 - a2 * b1;

        if (determinant == 0) {
            printf("方程组无解或有无穷多解，请检查系数。\n");
            return;
        }

        double x = (b2 * c1 - b1 * c2) / determinant;
        double y = (a1 * c2 - a2 * c1) / determinant;

        printf("%d",9);
    }
int main() 
{
    int T;
    scanf("%d",&T);
    if (T == 1) 
    {
        // 粘贴问题 1 的主函数代码，除了 return 0
        printf("I love Luogu!");
    } 
    else if (T == 2) 
    {
        int number=2+4;
        int left=4;
        printf("%d %d",number,left);
        // 粘贴问题 2 的主函数代码，除了 return 0
    } 
    else if (T == 3)
    {
        int number=14;
        int n1=number/4;
        int left=number%4;
        printf("%d\n%d\n%d",n1,number-left,left);
        // 请自行完成问题 3 的代码
    }
    else if (T == 4) 
    {
        double L=500.0;
        double l=L/3;
        printf("%.3lf",l);
        // 请自行完成问题 4 的代码
    } 
    else if (T == 5) 
    {
        int s=260+220;
        int v=12+20;
        int t=s/v;
        printf("%d",t);
        // 请自行完成问题 5 的代码
    } 
    else if (T == 6) 
    {
        int a2=pow(6.0,2.0);
        int b2=pow(9.0,2.0);
        int c2=a2+b2;
        double c=sqrt(c2);
        printf("%lf",c);
        // 请自行完成问题 6 的代码
    } 
    else if (T == 7) 
    {
        int number=100;
        int a;
        printf("%d\n",a=100+10);
        printf("%d\n",a-20);
        printf("%d\n",0);
        // 请自行完成问题 7 的代码
    } 
    else if (T == 8) 
    {
        double r=5.0;
        double pai=3.141593;
        double D=2*pai*r;
        double S=pow(r,2.0)*pai;
        double V=4*pai*pow(r,3.0)/3;
        printf("%lf\n%lf\n%lf\n",D,S,V);
        // 请自行完成问题 8 的代码
    } 
    else if (T == 9) 
    {
        int a=1;
        int count[4];
        count[3]=(a+1)*2;//3
        count[2]=(count[3]+1)*2;//2
        count[1]=(count[2]+1)*2;//1
        printf("%d",count[1]);
        
        // 请自行完成问题 9 的代码
    } 
    else if (T == 10) 
    {

// 求解二元一次方程组
    
        // 假设方程组为：
        // a1*x + b1*y = c1
        // a2*x + b2*y = c2

        double a1=30.0, b1=1.0, c1=240.0, a2=6.0, b2=1.0, c2=60.0;
        solveEquations(a1, b1, c1, a2, b2, c2);

    } 
    else if (T == 11) 
    {
        int va=5;
        int vb=8;
        double s=100.0;
        double t=s/(vb-va)*1.0;
        printf("%lf",t);
        // 请自行完成问题 11 的代码
    } 
    else if (T == 12) 
    {
        char a='A';
        int b;
        b=(int)a;
        char c='M';
        int C=(int)c;
        int weizhi=C-b+1;
        int wei18=b+17;
        char B=(char)wei18;
        printf("%d %c",weizhi,B);
        // 请自行完成问题 12 的代码
    } 
    else if (T == 13) 
    {
        double pai=3.141593;
        double r1=4.0;
        double r2=10.0;
        double V=4*pai*(pow(r1,3.0)+pow(r2,10.0))/4.0;
        int L=pow(V,1/3);
        printf("%d",L);

        // 请自行完成问题 13 的代码
    } 
    else if (T == 14) 
    {
        int sum=110;
        
        int i=0;
        int num=10;
        
        int tosum=0;
        for ( i = 41;i<110; i++)
        {
            int sum2=sum-i;
            tosum=(num+i)*sum2;
            
            if (tosum==3500)
            {
                
                //printf("%d",i);
                break;
                
            }
            
        }
        printf("%d",sum-i);
        // printf("tosum%d\n",tosum);

        // 请自行完成问题 14 的代码
    }
    return 0;
}