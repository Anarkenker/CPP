#include<iostream>
#include<cstdio>
#include<string>
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
    stu ans;
    cin>>ans.name>>ans.yu>>ans.shu>>ans.ying;
    for(int i=0;i<N-1;i++){
        stu ju;
        cin>>ju.name>>ju.yu>>ju.shu>>ju.ying;
        if((ju.yu+ju.shu+ju.ying)>(ans.yu+ans.shu+ans.ying)){
            ans=ju;
        }
    }
    cout<<ans.name<<" "<<ans.yu<<" "<<ans.shu<<" "<<ans.ying;
    return 0;
}