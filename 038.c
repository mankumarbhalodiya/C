#include<stdio.h>
int main()
{
    int num1, num2, temp1, temp2, remainder;
    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);
    temp1 = num1;
    temp2 = num2;
    while(num2 != 0)
    {
        remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }
    int hcf = num1;
    int lcm = (temp1 * temp2)/hcf;
    printf("The lcm is = %d", lcm);
    return 0;
}