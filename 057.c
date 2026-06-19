#include<stdio.h>
int main()
{
    int i =2 , n, isPrime= 1;
    printf("Enter a number :");
    scanf("%d", &n);
    if(n == 1)
    {
        printf("1 is not a prime number");
    }
    do
    {
        if(n%i==0)
        {
            isPrime=0;
            break;
        }
        i++;
       
    } while (i*i<=n);
    if(isPrime)
    {
        printf("%d is a prime number", n);
    }
    else{
        printf("%d is not a prime number", n);
    }
    
    return 0;
}