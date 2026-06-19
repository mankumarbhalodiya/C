#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number :");
    scanf("%d", &n);
    int sum=0;
    int i =0;
    while (i<=n)
    {
       sum +=i;
       i++;
    }
    printf("sum is = %d", sum);
    
    

    return 0;
}