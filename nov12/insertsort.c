#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int j=i-1;
        int temp=ar[i];
        while(j>0 && temp<arr[i]){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;    
    }
    for(int i=0;i<n;i++){
        printf("%d  ",arr[i]);
    }
}    