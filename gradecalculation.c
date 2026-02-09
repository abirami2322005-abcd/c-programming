#include <stdio.h>
int main() {
    int score;
    scanf("%d",&score);
    if (score>100||score<0){
        printf("Invalid score");
    }
    else if (score>=90&&score<=100) {
        printf("gradeA");
    }
    else if (score>=80&&score<=89) {
        printf("gradeB");
    }
    else if (score>=70&&score<=79) {
        printf("gradeC");
    }
    else if (score>=60&&score<=69){
        printf("gradeD");
    }
    else {
    printf("gradeF");
    }
return 0;
}