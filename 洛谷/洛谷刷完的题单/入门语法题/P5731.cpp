#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
    int n,i,j,r,c,head,snake[10][10];
    for(i=0;i<=9;++i){
        for(j=0;j<=9;++j){
            snake[i][j]=0;
        }
    }
    cin>>n;
    head=1;r=1;c=1;
    snake[1][1]=1;
    for(i=2;i<=n*n;++i){
        if(head==1 && (c<n && snake[r][c+1]==0)){
            ++c;
        }
        else if(head==1 && (c==n || snake[r][c+1]!=0)){
            head=2;
            ++r;
        }
        else if(head==2 && (r<n && snake[r+1][c]==0)){
            ++r;
        }
        else if(head==2 && (r==n || snake[r+1][c]!=0)){
            head=3;
            --c;
        }
        else if(head==3 && (c>1 && snake[r][c-1]==0)){
            --c;
        }
        else if(head==3 && (c==1 || snake[r][c-1]!=0)){
            head=4;
            --r;
        }
        else if(head==4 && (r>1 && snake[r-1][c]==0)){
            --r;
        }
        else if(head==4 && (r==1 || snake[r-1][c]!=0)){
            head=1;
            ++c;
        }
        snake[r][c]=i;
    }
    for(i=1;i<=n;++i){
        for(j=1;j<=n;++j){
            if(j%n==0){
                printf("%3d\n",snake[i][j]);
            }
            else{
                printf("%3d",snake[i][j]);
            }
        }
    }
    return 0;
}