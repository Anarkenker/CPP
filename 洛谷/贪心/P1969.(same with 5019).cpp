#include<bits/stdc++.h>
using namespace std;
int n,a[100005];
long long ans;
int main()
{
	cin >> n;
	for(int i = 1;i <= n; i++){   
        cin >>a [i];
    }
    ans = a[1];
	for(int i = 2;i <= n; i++){
        if(a[i] > a[i-1]){
            ans += a[i] - a[i-1];
        }
    }
	cout << ans;
	return 0;
}