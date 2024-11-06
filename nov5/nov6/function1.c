#include<stdio.h>
int add(){
    int a=6,b=7;
    return a+b;
}
int main(){
    add();
    printf("%d\n",add(4,5));
    return 0;
}