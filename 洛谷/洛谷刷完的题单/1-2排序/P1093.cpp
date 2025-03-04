#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct stu{
    int x, s, y, n;
    int sum(){
        return x + y + s;
    }
};
bool cmp(stu s1, stu s2){
    if(s1.sum() == s2.sum()){
        if(s1.x == s2.x){
            return s1.n < s2.n;
        }
        else{
            return s1.x > s2.x;
        }
    }
    else{
        return s1.sum() > s2.sum();
    }
}
int main(){
    int n, cnt = 0;
    cin >> n;
    stu num[301];
    for(int i = 0; i < n; i++){
        cin >> num[i].x >> num[i].s >> num[i].y;
        cnt++;
        num[i].n = cnt;
    }
    sort(num, num + n, cmp);
    for(int i = 0; i < 5; i++){
        cout << num[i].n << " " << num[i].sum() << endl;
    }
    return 0;
}