#include<stdio.h>
int main()
{
    int num,digit,product=1;
    printf("Enter number :");
    scanf("%d", &num);
    if(num ==0)
    {
        product =0;
    }
    for(;num>0;num/=10)
    {
        digit =num%10;
        product*=digit;
    }
    printf("The product = %d", product);
    return 0;
}