#include<stdio.h>
int factorial(int num);
int main()
{
    int n,sum=0, i=1;
    printf("Enter n:");
    scanf("%d", &n);
    do
    {
        sum+=factorial(i);
        i++;
    } while (i<=n);
    printf("The sum of factorials upto %d is %d", n, sum);
    return 0;
}
int factorial(int num)
{
    int fact=1, i=1;
    do{
    
    fact *=i;
   i++;
    }while(i<=num);
     return fact;
    
}