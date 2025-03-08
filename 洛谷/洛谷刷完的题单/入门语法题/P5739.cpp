#include<cstdio>
#include<algorithm>
#include<iostream>
using namespace std;
long long ans = 1;
int n;
void jie_cheng(int x)
{
	ans *= x;
	if(x == n)
	{
		return;
	}
	jie_cheng(x + 1);
}
int main()
{
	scanf("%d", &n);
	jie_cheng(1);
	printf("%lld\n", ans);
	return 0;
}