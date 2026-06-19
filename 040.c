#include<stdio.h>
int factorial(int num);
int main()
{
    int n, i=1, sum = 0;
    printf("Enter n:");
    scanf("%d", &n);
    while(i<=n)
    {
       sum+=factorial(i);
       i++;        
    }
    printf("The sum of factorials upto %d is %d", n, sum);
}
int factorial(int num)
{
    int fact=1, i=1;
    while(i<=num)
    {
        fact *=i;
        i++;
    }
    return fact;
}