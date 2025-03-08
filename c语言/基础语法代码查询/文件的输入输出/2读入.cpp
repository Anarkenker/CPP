#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    ifstream ifile;
    ifile.open("Text.txt",ios::in);
    if(!ifile){
        cerr<<"open file fail"<<endl;
        exit(1);
    }
    for(int i=0;i<(int)(sizeof(arr)/sizeof(int));i++){
        ifile>>arr[i];
    }
    ifile.close();
    return 0;
}