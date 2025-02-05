#include<iostream>
#include<cstdio>
using namespace std;
struct stu
{
    int num,g1,g2,g3;
};
int main()
{
    int N;
    cin>>N;
    stu n[1000];
    for(int i=0;i<N;i++){
        cin>>n[i].num>>n[i].g1>>n[i].g2;
        n[i].g3=n[i].g1+n[i].g2;
        if((n[i].g1*7+n[i].g2*3)>=800&&n[i].g1+n[i].g2>140){
            cout<<"Excellent"<<endl;
        }
        else{
            cout<<"Not excellent"<<endl;
        }
    }
    return 0;
}