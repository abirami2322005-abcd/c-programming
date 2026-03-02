#include<stdio.h>
int main(){
    char str[101];
    char *start,*end;
    int length=0,digit=1;
    scanf("%s",str);   
    start=str;
    while(*(start+length)!='\0'){
        length++;
    }
    end=str+length-1;
    start=str;
    while(start<end){
        if (*start!=*end){
            digit=0;
            break;
        }
        start++;
        end--;
    }
    if (digit)
        printf("YES");
    else
        printf("NO");
    return 0;
}
