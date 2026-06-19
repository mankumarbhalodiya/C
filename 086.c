#include<stdio.h>
int main()
{
    int num, reverse = 0, digit;
    printf("Enter number :");
    scanf("%d", &num);
    for(;num>0;num/=10)
    {
        digit = num%10;
        reverse = reverse *10+digit;
    }
    printf("The reverse of digit is : %d", reverse);
    return 0;
}