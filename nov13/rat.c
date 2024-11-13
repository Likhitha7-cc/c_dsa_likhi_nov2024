#include<stdio.h>
int isSufficint(int n,int arr[],int enough){
    if(n==0){
        return -1;
    }
    int total=0;
    for(int i=0;i<n;i++){
        total=total+arr[i];
        if(total>=enough){
            return i+1;
        }
    }
    return 0;
}
int main(){
    int rat;
    printf("enter no.rat:");
    scanf("%d",&rat);
    int unit;
    printf("enter no. unit:");
    scanf("%d",&unit);
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int arr[n];
    printf("enter elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    } 
    int enough=rat*unit;
    printf("%d  ",isSufficint(n,arr,enough));
}