#include <stdio.h>
int main()
{
    int first, second, third;
    printf("Enter first number :");
    scanf("%d", &first);
    printf("Enter second number :");
    scanf("%d", &second);
    third = first;
    first = second;
    second= third;
    printf("The first number is : %d", first);
    printf("The second number is : %d", second);
    return 0;
}