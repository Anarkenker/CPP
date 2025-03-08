#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int a=5;//二进制表示为0000101；
    int b=a<<10;//二进制表示为00001010；
    //运算规则b=a*2的十次方；
    //这里a是被移动的数字，然后右边数是指数，如果是
    //b=10<<a;那么就是10*2^10；
    //n<<1=2n;
    //高位越界后舍弃，指的是超过了数据类型的最大字节数。所以舍弃
    
    cout<<b<<endl;
}