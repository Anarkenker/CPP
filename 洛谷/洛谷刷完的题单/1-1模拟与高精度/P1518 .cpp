#include<iostream>
#include<cstdio>
#include<vector>
using namespace std;
vector<vector<char>> m(10,vector<char>(10));
int ff = 0, fc = 0, xf, yf, xc, yc;
void move(int& flag, int& x, int& y){
    flag %= 4;
    if(flag == 0){
        if(x - 1 >= 0 && m[x - 1][y] != '*'){
            x--;
        }
        else{
            flag = (flag + 1) % 4;
        }
    }
    else if(flag == 1){
        if(y + 1 < 10 && m[x][y + 1] != '*'){
            y++;
        }
        else{
            flag = (flag + 1) % 4;
        }
    }
    else if(flag == 2){
        if (x + 1 < 10 && m[x + 1][y] != '*'){
            x++;
        }
        else{
            flag = (flag + 1) % 4;
        }
    }
    else if(flag == 3){
        if(y - 1 >= 0 && m[x][y - 1] != '*'){
            y--;
        }
        else{
            flag = (flag + 1) % 4;
        }
    }
}
int main()
{
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            cin >> m[i][j];
            if(m[i][j] == 'F'){
                xf = i;
                yf = j;
            }
            if(m[i][j] == 'C'){
                xc = i;
                yc = j;
            }
        }
    }
    int ans = 0;
    while (ans <= 100000) { // 设置最大步数，防止死循环
        if (xf == xc && yf == yc) {
            break; // F 和 C 相遇
        }
        move(fc, xc, yc);
        move(ff, xf, yf);
        ans++;
    }
    if (xf == xc && yf == yc){
        cout << ans;
    }
    else{
        cout << '0';
    }
    return 0;
}
/*while (ans <= 100000) { // 设置最大步数，防止死循环
        if (xf == xc && yf == yc) {
            break; // F 和 C 相遇
        }
        move(fc, xc, yc);
        move(ff, xf, yf);
        ans++;
    }
*/