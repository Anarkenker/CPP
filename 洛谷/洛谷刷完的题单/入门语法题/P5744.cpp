#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
struct student
{
    string name;
    int year,grade;
};
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        student ex;
        cin>>ex.name>>ex.year>>ex.grade;
        ex.year++;
        ex.grade=ex.grade*6/5;
        if(ex.grade>=600){
            ex.grade=600;
        }
        cout<<ex.name<<" "<<ex.year<<" "<<ex.grade<<endl;
    }
    return 0;
}