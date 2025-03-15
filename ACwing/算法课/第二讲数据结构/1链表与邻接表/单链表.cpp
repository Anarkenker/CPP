//多用于写邻接表,用于存图和树；
//每一个点都可以存一个val和指向下一个节点的指针
//这里讲的是用数组模拟单链表
#include<iostream>
#include<cstdio>
using namespace std;
const int N = 1e5 + 10;
int head, e[N], ne[N], idx;
//head表示头节点的下标
//e[i]表示节点i的值
//ne[i]表示节点i的next指针是多少
//idx存储当前已经用到了哪个点
void init(){//初始化
    head = -1;
    idx = 0;
}

//将x插到头结点, 插入到头节点！！！！
void add_to_head(int x){
    e[idx] = x;
    ne[idx] = head;
    head = idx;
    idx++;
}

//将x插到下标是k的后面
void add(int k, int x){
    e[idx] = x;
    ne[idx] = ne[k];
    ne[k] = idx;
    idx++;
}

int main(){

}
//在算法题中不要考虑内存的事情