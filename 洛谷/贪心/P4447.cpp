#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
map<int, int> m;
int main(){
    int n, ans = 0x3f3f3f;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        m[x]++;
    }
    while(!m.empty()){
        auto i = m.begin(), j = m.begin();
        (*j).second--;
        int t = 1;
        for(++j; j != m.end() && (*j).first == (*i).first + 1 && (*j).second > (*i).second; i++, j++){
            t++;
            --(*j).second;
        }
        i = m.begin();
        while(i != m.end() && (*i).second == 0){
            m.erase((*i++).first);
        }
        if(t < ans){
            ans = t;
        }
    }
    cout << ans;
    return 0;
}