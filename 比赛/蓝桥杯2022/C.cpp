#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main(){
	int n;
	cin >> n;
	vector<int> a(n + 1);
	vector<int> sum(n + 1, 0);
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		sum[0] += a[i];
	}
	
	for(int i = 1; i <= n; i++){
		sum[i] = sum[i - 1] - a[i];
	}
	
	int ans = 0;
	
	for(int i = 1, j = 1; i <= n; i++, j++){
		ans += sum[i] * a[i];
	}
	
	cout << ans;
	
	return 0;
}