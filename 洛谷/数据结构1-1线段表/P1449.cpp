#include<iostream>
#include<string>
#include<cctype>
#define int long long
using namespace std;
const int N = 1e6;
int stk[N];
int tt = -1;
void push(int a){
    stk[++tt] = a;
}
signed main(){
    string str;
    cin >> str; 
    string str1 = "";
    for(int i = 0; i < str.size(); i++){
        if(isdigit(str[i])){
            str1 += str[i];
        }
        else if(str[i] == '.'){
            int num = stoi(str1);
            str1 = "";
            push(num);
        }
        else if(str[i] == '-'){
            int n1, n2, mid;
            n1 = stk[tt];
            n2 = stk[--tt];
            mid = n2 - n1;
            stk[tt] = mid;
        }
        else if(str[i] == '*'){
            int n1, n2, mid;
            n1 = stk[tt];
            n2 = stk[--tt];
            mid = n2 * n1;
            stk[tt] = mid;
        }
        else if(str[i] == '+'){
            int n1, n2, mid;
            n1 = stk[tt];
            n2 = stk[--tt];
            mid = n1 + n2;
            stk[tt] = mid;
        }
        else if(str[i] == '/'){
            int n1, n2, mid;
            n1 = stk[tt];
            n2 = stk[--tt];
            mid = n2 / n1;
            stk[tt] = mid;
        }
        if(str[i] == '@'){
            break;
        }
    }
    //1000.1000.*101.*6.*@
    cout << stk[tt] << endl;
    return 0;
}