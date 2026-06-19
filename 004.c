#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b :");
    scanf("%d", &b);
    int add= a+b;
    int sub= a-b;
    int multi= a*b;
    int div= a/b;
    printf("The addition = %d", add);
    printf("The subtraction = %d", sub);
    printf("The multiplication = %d", multi);
    printf("The division = %d", div);
    return 0;
}