#include<stdio.h>
int main()
{
    int n, i=1, factorial =1;
    printf("Enter a number :");
    scanf("%d", &n);
    do
    {
        factorial *=i;
        i++;
    } while (i<=n);
    printf("The facotial is = %d", factorial);
    
    return 0;
}