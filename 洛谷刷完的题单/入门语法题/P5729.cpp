#include<iostream>
#include<cstdio>
using namespace std;
int a[21][21][21];
int main()
{
    int w,x,h,q;
    cin>>w>>x>>h;
    cin>>q;
    for(int k=1;k<=w;k++){
        for(int y=1;y<=x;y++){
            for(int z=1;z<=h;z++){
                a[k][y][z]=1;    
            }
        }
    }
    int a1,a2,a3,a4,a5,a6;
    for(int i=0;i<q;i++){
        cin>>a1>>a2>>a3>>a4>>a5>>a6;
            for(int k=1;k<=w;k++){
                for(int y=1;y<=x;y++){
                    for(int z=1;z<=h;z++){
                        if(k>=a1&&k<=a4&&y>=a2&&y<=a5&&z>=a3&&z<=a6){
                            a[k][y][z]=0;
                        }
                    }
                }
            }
    }
    int count=0;
    for(int k=1;k<=w;k++){
        for(int y=1;y<=x;y++){
            for(int z=1;z<=h;z++){
                if(a[k][y][z]==1){
                    count++;
                }
            }
        }
    }
    cout<<count;
    return 0;
}