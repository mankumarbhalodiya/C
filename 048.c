#include<stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    int i =1;
    int sum =0;
    while (i<=n)
    {
       if(i%2==0)
       {
        sum +=i;
        
       }
       i++;
    }
    printf("The sum of even numbers = %d", sum);
    
    return 0;
}