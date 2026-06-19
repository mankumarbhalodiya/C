#include <stdio.h>
int main() {
    float basesalary, FS,final;
    int score;
    printf("Enter base salary: ");
    scanf("%f", &basesalary);
    printf("Enter performance evaluation score (1 to 5): ");
    scanf("%d", &score);

    switch (score) {
        case 1:
            FS = basesalary * 5  ;
            final=FS/100 + basesalary;
            printf("The final salary is: %f\n", final);
            break;
        case 2:
            FS = basesalary * 5 ;
            final=FS/100 + basesalary;
            printf("The final salary is: %f\n", final);
            break;
        case 3:
            FS = basesalary * 10 ;
            final=FS/100 + basesalary;
            printf("The final salary is: %f\n", final);
            break;
        case 4:
            FS = basesalary * 15 ;
            final=FS/100 + basesalary;
            printf("The final salary is: %f\n", final);
            break;
        case 5:
            FS = basesalary * 20 ;
            final=FS/100 + basesalary;
            printf("The final salary is: %f\n", final);
            break;

    }
    return 0;
}

