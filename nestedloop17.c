#include<stdio.h>
int main(){
    char ch='A';
    for(int i=0;i<=5;i++){
        for(int j=1;j<=5-i;j++){
        printf(" ");
        }
        for(int k=0;k<2*i-1;k++){
            printf("%c",ch+k);
        }
        for(int l=i-2;l>0;i--){
             printf("%c",ch+l);
         }

        printf("\n");
    }
    return 0;
}