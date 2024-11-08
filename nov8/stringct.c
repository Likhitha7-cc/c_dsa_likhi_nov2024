#include<stdio.h>
int main(){
    //compile time
    char str[5]="hello";
    char str2[3]={'a','b','c'};
    printf("%c\n",&str[4]);
    printf("%c\n",&str2[2]);
}