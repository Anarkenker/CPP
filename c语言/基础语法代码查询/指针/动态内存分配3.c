#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int i;
    void *p;
    int cnt=0;
    //while ((p=malloc(100*1024*1024)))
    //{
        //cnt++;
    //}
    //printf("%d",cnt);
    p=&i;
    free(p);

    return 0;
}