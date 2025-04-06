#include <bits/stdc++.h>

using namespace std;

int ans = 0;

void check(int x){
	set<int> m;
	for(int i = 1; i < 1e6; i++){
		if(x % i == 0){
			m.insert(i);
			m.insert(x / i);
		}
		else{
			
		}
	}
}

int main(){
	int l, r;
	cin >> l >> r;
	for(int i = l; i <= r; i++){

	}
	return 0;
}