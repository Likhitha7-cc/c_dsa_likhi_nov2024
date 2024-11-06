#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int r=0;
    while(n!=0){
        n=n/10;
        r++;
    }
    printf("%d\n",r);
    return 0;
}