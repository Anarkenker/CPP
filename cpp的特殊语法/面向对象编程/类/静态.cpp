#include<iostream>
#include<cstdio>
static int s_Variable=5;//如果不加static那就是一个完全全局的全局变量。
int main(){
    std::cout<<s_Variable;
    return 0;
}                                                                                                              