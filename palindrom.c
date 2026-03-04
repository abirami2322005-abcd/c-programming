#include<stdio.h>
int main(){
    char str[10];
    int i,len,digit=0;
    scanf("%s",str);
    len = strlen(str);
    for(int i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            digit=1;
            break;
        }
    }
    if(digit==0)
    printf("Palindrome");
    else{
        printf("Not palindrome");
    }
    return 0;

}