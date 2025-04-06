#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N = 1e6 + 10;
LL n, s, p[N], c[N], cnt[N], Sum, now, ans;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	cin >> n >> s;
	for (int i = 1; i <= n; i++)
		cin >> p[i] >> c[i], cnt[c[i]] += p[i], now += p[i], Sum += p[i] * c[i];
	for (int i = 1; i <= 1e6; i++) {
		if (now < s)  break;
		ans += s;
		Sum -= now;
		now -= cnt[i];
	}
	cout << ans + Sum;
	return 0;
}