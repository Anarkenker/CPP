#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;
int main(){
    int T;
    cin >> T;
    for(int i = 0; i < T; i++){
        int x, y, z, a, b, c;
        cin >> x >> y >> z >> a >> b >> c;
        int temp[3] = {x * a, y * b, z * c};
        sort(temp, temp + 3);
        cout << temp[2] << endl;
    }
    return 0;
}