include <stdio.h>
int main() {
    int mark;
    scanf("%d", &mark);
    switch(mark/10) {
        case 9:   
            printf(" GradeA");
            break;
        
        case 8: 
            printf("GradeB");
            break;
        case 7:
            printf("GradeC");
            break;
        case 6:
            printf("GradeD");
            break;
        case 5:
             printf("GradeE");
             break;
        case 4:
             printf("GradeF");
             break;
        case 3:
            if (mark>30&&mark<40) 
                printf("Supplementary");

            else 
            printf("fail");
            break;
        default:
             printf("Fail");

            }
    
        }
    
