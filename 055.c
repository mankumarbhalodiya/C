#include<stdio.h>
int main()
{
    int num,digit ,sum =0;
    printf("Enter a number :");
    scanf("%d", &num);
    if(num<0)
    {
        num = -num;
    }
    do
    { 
        digit = num % 10;
        sum +=digit;
        num /=10;
    } while (num!=0);
    printf("The sum of entered number is : %d", sum);
    
    return 0;
}