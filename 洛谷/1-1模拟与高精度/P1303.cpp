#include<iostream>
#include<cstdio>
#include<cstring>
#include<string>
/*核心算法：
c[i+j-1]+=a[i]*b[j];
c[i+j]+=c[i+j-1]/10;
c[i+j-1]%=10;*/
using namespace std;
string str1, str2;
int s1[10000], s2[10000], an[10000];
int main()
{
    cin >> str1 >> str2;
    int len1 = str1.size();
    int len2 = str2.size();
    for(int i = 0;i < len1; i++){
        s1[len1 - i] = str1[i] - '0';
    }
    for(int j = 0;j < len2; j++){
        s2[len2 - j] = str2[j] - '0';
    }
    for(int i = 1;i <= len1; i++){
        for(int j = 1;j <= len2; j++){
            an[i + j - 1] += s1[i] * s2[j];
            an[i + j] += an[i + j - 1] / 10;
            an[i + j - 1] %= 10;
        }
    }
    int len = len1 + len2;
    while(an[len] == 0 && len > 1) len--;
    for(int i = len;i > 0; i--){
        cout << an[i];
    }
    return 0;
}