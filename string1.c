#include <stdio.h>
#include<string.h>
int main() {
    char str[20]={'VENKY@123'};
    int i=0,digit=0;
    scanf("%d",str);
    while(str[i]!='\0'){
        if(str[i]>='A'&&str[i]<='Z'){
         digit=1;
            break;
        }
        i++;
    }
    if(digit)
        printf("Valid");
    else
        printf("Invalid");
    return 0;
}


    
