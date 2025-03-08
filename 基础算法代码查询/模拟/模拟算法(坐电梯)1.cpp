#include<iostream>
#include<cstdio>
using namespace std;
int n,a,ans;

int s[100000000];
int main()
{
    int max=0;
    cin>>n;//一共几人//
    for(int i=1;i<=n;i++){
        cin>>a;//每一个人想去的楼层
        if(s[a]==0){
            ans+=5;
        }
        s[a]=1;
        if(a>max){
            max=a;
        }
    }
    ans+=n;
    ans+=max*10;
    cout<<ans;
    return 0;
}
//模拟是对真实事物或者过程的虚拟
//准确掌握题目描述的规则，并理解题意；
//需要掌握一些语法的特殊处理，例如字符串；