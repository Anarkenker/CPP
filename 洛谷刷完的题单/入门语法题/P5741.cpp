#include<iostream>
#include<cstdio>
#include<string>
#include<cstdlib>
using namespace std;
struct stu
{
    string name;
    int yu,shu,ying;
};
int main()
{
    int N;
    cin>>N;
    stu num[1000];
    for(int i=0;i<N;i++){
        cin>>num[i].name>>num[i].yu>>num[i].shu>>num[i].ying;
    }
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(abs(num[i].yu+num[i].shu+num[i].ying-num[j].yu-num[j].shu-num[j].ying)<=10&&abs(num[i].yu-num[j].yu)<=5&&abs(num[i].shu-num[j].shu)<=5&&abs(num[i].ying-num[j].ying)<=5){
                cout<<num[i].name<<" "<<num[j].name<<endl;
            }
        }
    }
    return 0;
}