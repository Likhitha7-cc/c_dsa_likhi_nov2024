#include<stdio.h>
#include<string.h>
int ispalindrome(char str[]){//level
     int left=0,right=strlen(str)-1;
     while(left<right){
        if(str[left]!=str[right]){
            return 0;
        }
        left++;
        right--;
     }
     return 1;
}
int main(){
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%d",str);
    printf("%d",ispalindrome(str));
}
