 #include<stdio.h>
 int isautomorphic(int n,int sqr){
    while(n!=0){
        if(n%10!=sqr%10){
            return 0;
        }
        n=n/10;
        sqr=sqr/10;
    }
    return 1;
 }
 int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    int sqr=n*n;
    printf("%d  ",isautomorphic(n,sqr));
 }