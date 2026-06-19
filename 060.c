#include<stdio.h>
int main()
{
    int num1, num2, hcf, lcm, remainder;
    printf("Enter two numbers :");
    scanf("%d %d", &num1, &num2);
    int temp1= num1;
   int temp2 = num2;
    do
    {
       remainder = num1%num2;
       num1=num2;
       num2 = remainder;
    } while (num2!=0);
    hcf = num1;
    lcm = (temp1*temp2)/hcf;
    printf("The lcm of %d and %d is : %d", temp1, temp2, lcm);
    return 0;
}
