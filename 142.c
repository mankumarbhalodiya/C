#include<stdio.h>
int main()
{
    int num1, num2;
    int sum;
    printf("Enter two numbers :");
    scanf("%d %d", &num1, &num2);
    int *ptr1=&num1;
    int *ptr2=&num2;
    sum = *ptr1+*ptr2;
    printf("The sum of two numbers is = %d", sum);
    return 0;
}