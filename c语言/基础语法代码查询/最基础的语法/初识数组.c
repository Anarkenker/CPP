#include <stdio.h>

int main()
{
    int x;
    double sum=0;
    int cnt=0;
    int number[100];//定义数组，存在安全隐患，因为万一cnt超过100则超过数组容量。
    scanf("%d",&x);
    while (x!=-1)
    {
        number[cnt]=x;//对数组元素进行赋值
        printf("%d\n",cnt);
        int i;
        for ( i = 0; i <= cnt; i++)
        {
            printf("%d\t",number[i]);
        }
        printf("\n");
        sum+=x;
        cnt++;
        scanf("%d",&x);
    }
    if (cnt>0)
    {
        printf("%f\n",sum/cnt);
        int i;
        for ( i = 0; i < cnt; i++)//遍历数组
        {
            if (number[i]>sum/cnt)
            {
                printf("%d\n",number[i]);//使用数组
            }
            
        }
        
    }
    return 0;
}