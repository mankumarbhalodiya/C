#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b :");
    scanf("%d", &b);
    printf("Enter c:");
    scanf("%d", &c);
    if (a>b && a>c)
    {
        printf("The greater number is : %d", a);
    }
    else if (b>a && b>c)
    {
        printf("The greater number is : %d", b);
    }
    else

    {

printf("The greater number is : %d", c);
    }
    return 0;
}