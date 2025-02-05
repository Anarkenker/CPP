 #include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(0));
    int number=rand()%6;
    char yunshi[][10]={"大凶","大吉","小凶","中吉","中凶","小吉"};
    printf("你今天的运势是%s",yunshi[number]);
    return 0;
}