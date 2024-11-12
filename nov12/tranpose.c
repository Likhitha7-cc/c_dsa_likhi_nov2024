#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m;
    scanf("%d",&m);
    int arr[n][n];
    printf("enter elements:");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter tranpose:");
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d   ",arr[j][i]);
        }
        printf("\n");
    }
}  