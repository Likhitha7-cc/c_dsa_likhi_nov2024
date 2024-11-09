#include<stdio.h>
int main(){
    int n,max;
    printf("enetr the no. of elements:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    printf("%d",max);
}    