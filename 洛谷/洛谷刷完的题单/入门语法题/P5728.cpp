#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
struct student
{
    int yuwen;
    int shuxue;
    int yingyu;
    int sum;
};
int main()
{
    int n,ans=0;
    cin>>n;
    student num[1000];
    for(int i=0;i<n;i++){
        cin>>num[i].yuwen>>num[i].shuxue>>num[i].yingyu;
        num[i].sum=num[i].yuwen+num[i].shuxue+num[i].yingyu;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(num[i].yuwen-num[j].yuwen)<=5&&abs(num[i].shuxue-num[j].shuxue)<=5&&abs(num[i].yingyu-num[j].yingyu)<=5&&abs(num[i].sum-num[j].sum)<=10){
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}