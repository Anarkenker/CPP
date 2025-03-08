#include<stdio.h>
#include<math.h>
int main(){
    double m,h,ans;
    int digit = 0;
    scanf("%lf %lf",&m,&h);
    ans = m / pow(h,2);
    digit = ans >= 1 ? log10((int)ans) + 1:0;
    if(ans < 18.5)
    {
        printf("Underweight");
    }
    else if(ans >= 18.5 && ans < 24)
    {
        printf("Normal");
    }
    else
    {
        printf("%.*lf\nOverweight",6-digit,ans);
    }
    return 0;
}