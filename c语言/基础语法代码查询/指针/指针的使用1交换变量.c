#include<Stdio.h>
void swap(int *pa,int *pb);
int main(void)
{
    int a=5;
    int b=6;
    swap(&a,&b);
    printf("a=%d,b=%d\n",a,b);
    return 0;
}
void swap(int *pa,int *pb)
{
    int t=*pa;
    *pa=*pb;
    *pb=t;
}
//因为如果不是用指针的话函数无法同时返回两个量所以会导致交换的 失败，
//于是要用指针进行交换