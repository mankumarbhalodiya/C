#include<stdio.h>
int main()
{
    int num1, num2, temp;
    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);
    if(num2>num1)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    do
    {
       temp=num1%num2;
       num1 = num2;
       num2 = temp;
    } while (num2!=0);
    printf("The HCF is = %d", num1);
    
    return 0;
}