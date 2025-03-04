#include<iostream>
#include<cstdio>
#define int long long
using namespace std;
signed main()
{
	int n;
	cin>>n;
	for(int i=n;i>=0;i--){
		int x;
		cin>>x;
		if(x){
			if(i!=n&&x>0){
				cout<<'+';
            }
			if(i!=0&&x==-1){
				cout<<'-';
            }
			if(abs(x)>1||i==0){
				cout<<x;
            }
			if(i>1){
				cout<<"x^"<<i;
            }
			if(i==1){
				cout<<'x';
            }
		}
	}
	return 0;
}