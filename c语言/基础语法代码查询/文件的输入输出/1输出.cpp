#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8};
    ofstream ofile;
    ofile.open("Text.txt",ios::out);
    if(!ofile){
        cerr<<"open file fail"<<endl;
        exit(1);
    }
    for(int i=0;i<(int)(sizeof(arr)/sizeof(int));i++){
        ofile<<arr[i]<<" ";
    }
    ofile.close();
    return 0;
}