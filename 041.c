#include<stdio.h>
int main()
{
    int n;
    int lastdigit, firstdigit;
    printf("Enter a number :");
    scanf("%d", &n);
     lastdigit =n %10;
     firstdigit = n;
     while (firstdigit >=10)
     {
      firstdigit /=10;
     }
     printf("The first digit is = %d", firstdigit);
     printf("The last digit is = %d", lastdigit);
     
    return 0;
}