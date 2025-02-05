#include<stdio.h>
void bubblesort (int arr[],int n){
    int i,j,tem;
    for(i=0;i<n-1;++i){
        for(j=0;j<n-i-1;++j){
            if(arr[j]>arr[j+1]){
                tem=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tem;
            }
        }
    }
}
int main(){
    int i[3],counter,h,k,l;
    char j[3];
    for(counter=0;counter<2;++counter){
        scanf("%d",&i[counter]);
    }
    scanf("%d\n",&i[2]);
    for(counter=0;counter<3;++counter){
        scanf("%c",&j[counter]);
    }
    bubblesort(i,3);
    h=j[0]-'A';k=j[1]-'A';l=j[2]-'A';
    printf("%d %d %d",i[h],i[k],i[l]);
    return 0;
}