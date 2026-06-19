#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    int factorial = 1;
    int i=1;
    while (i<=n)
    {
       factorial *=i;
       i++;
    }
    printf("The factorial of entered number is = %d", factorial);
    
    return 0;
}