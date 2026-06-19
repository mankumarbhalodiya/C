#include<stdio.h>
int main()
{
    int num, product = 1, digit, i=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    do
    {
        digit = num%10;
        product *=digit;
        num/=10;
       i++;
    }while(num!=0);
    printf("The product is = %d", product);
    return 0;
}