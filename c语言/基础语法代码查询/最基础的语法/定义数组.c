#include<stdio.h>
void f();
int main()
{
    //int a[10];
    //a[0-9];
    //可以出现在赋值的左边和右边a[2]=a[1]+6;
    f();
    
    return 0;

}
void f()
{
    int a[10];
    a[9]=0;
    printf("%d",a[8]);
}