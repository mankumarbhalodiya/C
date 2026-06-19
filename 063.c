#include<stdio.h>
int main()
{
    int n, first,last,i=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n%10;
    first = n;
    do{
        first /=10;
        i++;
    }while(first>=10);
    printf("The first digit is = %d and last digit is = %d", first, last);
    return 0;
}