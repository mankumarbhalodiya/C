#include<stdio.h>
int main()
{
    int num, originalnum, remainder, result=0;
    printf("Enter a number :");
    scanf("%d", &num);
    originalnum=num;
    do
    {
        remainder = num %10;
        result += remainder * remainder * remainder;
        num /=10;
    } while (num!=0);
    if(result==originalnum)
    {
        printf("%d is a armstrong number", originalnum);
    }
    else
    {
        printf("%d is not a armstrong number", originalnum);
    }
    return 0;
}