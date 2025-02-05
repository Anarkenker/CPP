#include<iostream>
#include<algorithm>//sort和unique都在这个库里
#include<vector>//vector真方便
using namespace std;
vector<int>mem;
int main(){
	int n,k;
    cin>>n;
    for(int i=0;i<n;i++){
    	cin>>k;//读入
        mem.push_back(k);
    }
    vector<int>::iterator it;//记录调整后的位置
    sort(mem.begin(),mem.end());
    it=unique(mem.begin(),mem.end());//unique返回最后的指针
    mem.resize(distance(mem.begin(),it));//更改mem的大小,否则输出容易错
    cout<<mem.size()<<endl;
    for(int i=0;i<mem.size();i++){
    	cout<<mem[i]<<' ';//输出
	}