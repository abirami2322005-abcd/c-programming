#include<stdio.h>
int main(){
    char str1[20],str2[20];
    fgets(str1,sizeof(str1),stdin);
    int i=0;
    char *p=str1;
    char *p1=str2;
    while(*p!='\0'){
        *p1=*p;
        p++;
        p1++;
    }
    printf("%s",str2);
    return 0;

}
