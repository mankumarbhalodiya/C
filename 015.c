#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a:");
    scanf("%d", &a);
     printf("Enter b:");
    scanf("%d", &b);
    if(a<b)
    {
        printf(" The greater number is = %d", b);
    }
    else 
    {
        printf(" The greater number is = %d", a);
    }
    return 0;
}