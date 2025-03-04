#include<iostream>
#include<cstdio>
#include<vector>
#include<cstring>
using namespace std;
int main(){
    int a, b, c, cnt = 0;
    cin >> a >> b >> c;
    vector<int> an(10,0);
    vector<int> ans;
    for(int i = 1; i < 1000; i++){
        int ans1 = i * a, ans2 = i * b, ans3 = i * c;int an1 = ans1, an2 = ans2, an3 = ans3;
        if(ans1 > 100 && ans2 > 100 && ans3 > 100){
            for(int f = 0; f < 3; f++){
                
                an[an1 % 10]++;
                an1 /= 10;
            }
            for(int f = 0; f < 3; f++){
                
                an[an2 % 10]++;
                an2 /= 10;
            }
            for(int f = 0; f < 3; f++){
                an[an3 % 10]++;
                an3 /= 10;
            }
            int flag = 0;
            for(int j = 1; j < 10; j++){
                if(an[j] != 1){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                ans.push_back(ans1);
                ans.push_back(ans2);
                ans.push_back(ans3);
            }
            fill(an.begin(), an.end(), 0);
        }
        if(ans3 >= 1000){
            break;
        }
    }
    if(ans.empty()){
        cout << "No!!!";
    }
    else{
        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
            cnt++;
            if(cnt == 3){
                cout << endl;
                cnt = 0;
            }
        }
    }
    return 0;
}