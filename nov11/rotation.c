#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp=arr[n-1];
    for(int i=n-1;n>0;i--){
        arr[i]=arr[i-1];    
    }
    arr[0]=temp;
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}