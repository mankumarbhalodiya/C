#include<stdio.h>
int main()
{
    int n, first, last, product, i=1;
    printf("Enter n:");
    scanf("%d", &n);
    last = n% 10;
    first = n;
    do
    {
        first/=10;
       
    } while (first>=10);
    product = first * last;
    printf("The product of first and last digit is : %d", product);
    return 0;
}