#include<stdio.h>
int main(){
    int r;
    int c;
    printf("enter the no.of col and row:");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("enter the elements:");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=0;
    int index=-1;
    for(int i=0;i<r;i++){
        int count=0;
        for(int j=0;j<c;j++){
            if(arr[i][j]==1){
                count++;
            }
        }
        if(count>max){
            max=count;
            index=i;
        }
    }
    printf("%d  ",index+1);
}