#include<stdio.h>
int main()
{
    int n, originalnum, remainder, result=0;
    printf("Enter a number:");
    scanf("%d", &n);
    originalnum = n;
    while(n!=0)
    {
        remainder = n%10;
        result += remainder * remainder * remainder;
        n /=10;
    }
    if(result == originalnum)
    {
        printf("%d is a armstrong number.",originalnum);

    }
    else{
        printf("%d is not a armstrong number", originalnum);
    }
    return 0;
}