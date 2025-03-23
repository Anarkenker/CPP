#include <cstdio>
#include <iostream>
#include <cstring>
#include <string>

using namespace std;
int top,w[110];
string a;
char s[110],c[110];
int main()
{
	cin >> a;
	int n=a.length();
	for(int i=0;i<n;i++)
	{
		if(a[i] == '(' || a[i] == '[')
		{
			s[++top]=a[i];
			w[top]=i;
			if(a[i] == '(') c[i]=')';
			else c[i]=']';
		}
		if(a[i] == ')')
		{
			if(top && s[top] == '(') {c[w[top]]=' '; top--;}
			else c[i]='(';
		} 
		if(a[i] == ']')
		{
			if(top && s[top] == '[') {c[w[top]]=' '; top--;}
			else c[i]='[';
		}
	}
	for(int i=0;i<n;i++)
	{
		if(c[i] == '(' || c[i] == '[') printf("%c%c",c[i],a[i]);
		else if(c[i] == ')' || c[i] == ']') printf("%c%c",a[i],c[i]);
		else printf("%c",a[i]);
	}
	return 0;
}