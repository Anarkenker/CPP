#include<iostream>
#include<cstdio>

using namespace std;

//整数二分
//模板一，区间[l, r]被划分成[l, mid]和[mid + 1, r]时使用
bool check(int n){

}

int bsearch1(int l, int r){
    while(l < r){
        int mid = l + r >> 1;
        if(check(mid)) r = mid; //check()判断
        else l = mid + 1;
    }
    return l;
}

// 区间[l, r]被划分为[l, mid - 1] 和 [mid, r]时使用：

int bsearch2(int l, int r){
    while(l < r){
        int mid = l + r + 1 >> 1;
        if(check(mid)) l = mid;
        else r = mid - 1;
    }
    return l;
}
//现在来说一下整数二分的本质
//如果有单调性的话一定可以二分， 但是可以二分的题目不一定有单调性
//一半满足一半不满足就是二分
