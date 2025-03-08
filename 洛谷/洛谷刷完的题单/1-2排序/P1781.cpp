#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
struct num{
    string vote;
    int n;
};
bool cmp(num s1, num s2){
    if(s1.vote.size() == s2.vote.size()){
        for(int i = 0; i < (int)s1.vote.size(); i++){
            int ans = s1.vote[i] - s2.vote[i];
            if(ans != 0) {
                return ans > 0;
            }
        }
    }
    else{
        return s1.vote.size() > s2.vote.size();
    }
}       
int main(){
    int n, cnt = 0;
    cin >> n;
    num nu[21];
    for(int i = 0; i < n; i++){
        cin >> nu[i].vote;
        cnt++;
        nu[i].n = cnt;
    }
    sort(nu, nu + n, cmp);
    cout << nu[0].n << endl << nu[0].vote;
    return 0;
}