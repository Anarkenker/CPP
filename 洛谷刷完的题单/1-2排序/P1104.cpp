#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
struct stu{
    string name;
    int year, month, day;
};
bool cmp(stu s1, stu s2){
    if(s1.year == s2.year){
        if(s1.month == s2.month){
            if(s1.day == s2.day){
                return true;
            }
            else{
                return s1.day < s2.day;
            }
        }
        else{
            return s1.month < s2.month;
        }
    }
    else{
        return s1.year < s2.year;
    }
}
int main(){
    int n;
    cin >> n;
    vector<stu> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].name >> a[i].year >> a[i].month >>a[i].day;
    }
    sort(a.begin(), a.end(), cmp);
    for(int i = 0; i < n; i++){
        cout << a[i].name << endl;
    }
    return 0;
}