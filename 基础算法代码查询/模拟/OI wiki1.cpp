#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
	int n,u,d;
	cin>>n>>u>>d;
	int count=0,h=0;
	for(int i=0;;i++){
		h+=u;
		count++;
		if(h>n||h==n){
			cout<<count;
			break;
		}
		h-=d;
	}
	return 0;
}