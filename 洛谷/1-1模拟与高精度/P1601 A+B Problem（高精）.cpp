#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
#include<algorithm>
/*核心算法
    c[i]+=a[i]+b[i];
    c[i+1]=c[i]/10;
    c[i]=c[i]%10;
*/
using namespace std;
string s1, s2;
int a[10000], b[10000], ans[10000];
int main()
{
    cin >> s1 >> s2;
    int len1 = s1.size();
    int len2 = s2.size();
    for(int i = 0;i < len1; i++){
        a[len1 - i] = s1[i] - '0';
    }
    for(int j = 0;j < len2; j++){
        b[len2 - j] = s2[j] - '0';
    }
    int len = max(len1, len2) + 1;
    for(int i = 1;i <= len; i++){
        ans[i] += a[i] + b[i];
        ans[i + 1] = ans[i] / 10;
        ans[i] %= 10;
    }
    while(ans[len] == 0 && len > 1) len--;
    for(int i = len;i > 0; i--){
        cout << ans[i];
    }
    return 0;
}