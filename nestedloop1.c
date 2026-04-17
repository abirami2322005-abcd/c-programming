#include<stdio.h>
int main(){
    for(int i=1;i<=4;i++){
        char ch='A';
        for(int j=1;j<i+1;j++){
            printf("%c",ch);
            ch++;
        }
        ch-=2;
        for (int    j=1;j<1;j++){
            printf("%d",ch);
            ch--;
        } 
        printf("\n");
        }
        return 0;
    }