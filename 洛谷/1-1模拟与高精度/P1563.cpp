#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int flag[100001], a, len;
    string str[100001];
    for(int i = 0;i < n; i++){
        cin >> flag[i] >> str[i];
    }
    int pos = 0;
    for(int i =0 ;i < m; i++){
        cin >> a >> len;
        if((flag[pos] == 0 && a == 0) || (flag[pos] == 1 && a == 1)){
            pos -= len;
        }
        else{
            pos += len;
        }
        while(pos >= n){
            pos -= n;
        }
        while(pos <= -1){
            pos += n;
        }
    }
    cout << str[pos] << endl;
    return 0;
}