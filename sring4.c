#include<stdio.h>
#include<string.h>
int main(){
      char str[100];
    int i=0,len=0,digit=1;
    scanf("%s",str);
    while(str[len]!='\0')
        len++;
    for(i=0;i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            digit=0;
            break;
        }
    }
    if(digit)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}