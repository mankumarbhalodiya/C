#include<stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    int i = 1;
    printf("The even numbers are :");
    while (i<=n)
    {
       if(i%2==0)
       {
        printf("%d \n", i);
       }
       i++;
    }
    
    return 0;
}