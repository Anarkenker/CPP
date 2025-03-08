#include<iostream>
using namespace std;
int sum[100000] = {0};
int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        for(int k = 0; k < 100000; k++){
            sum[k] = 0;
        }
        int n, a;
        cin >> n >> a;
        sum[0] = 1;
        for(int k = 2; k <= n; k++){
            for(int j = 0; j < 100000; j++){
                sum[j] *= k;
            }
            for(int j = 0; j < 100000; j++){
                if(sum[j] > 9){
                    sum[j + 1] += sum[j] / 10;
                    sum[j] %= 10;
                }
            }
        }
        int ans = 0;
        int len = 100000;
        while(sum[len] == 0 && len > 0) len--;
        for(int k = len; k >= 0; k--){
            if(a == sum[k]) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
