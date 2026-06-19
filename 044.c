#include<stdio.h>
int main()
{
    int num, firstdigit, lastdigit;
    printf("Enter number :");
    scanf("%d", &num);
    lastdigit = num % 10;
    firstdigit = num;
    while (firstdigit>=10)
    {
        firstdigit /=10;
    }
     int product = firstdigit*lastdigit;
     printf("The product = %d", product);
    
    return 0;
}