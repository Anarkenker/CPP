//求解的个数
//dfs需要有一些参数。比如说枚举的层数，已经枚举了几个数据）
#include<iostream>
#include<cstdio>
using namespace std;
int ans = 0, n, a[10], ansa[10];
//ans表示的是枚举数的数量，num表示的是目前的的的值
void dfs(int cnt, int num){
    if(cnt == n){//已经枚举到要求数的数量
        if(num == 0){//答案正确
            ans++;
            for(int i = 0; i < n; i++){
                cout << ansa[i];
            }
            cout << endl;
        }
        return;
    }
    for(int i = -2; i <= 2; i++){
        //题目要求每个未知数的系数为-2到2
        ansa[cnt] = i;
        dfs(cnt + 1, num + a[cnt] * i);//哦我懂了，这里是把第一次的给算上了，然后进行下一次的枚举
    }
}
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    dfs(0, 0);//从 一个数也没枚有举和目前枚举数的值为0开始
    cout << ans;
}
