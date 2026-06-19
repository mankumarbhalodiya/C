#include<stdio.h>
int main()
{
    int num, reversenum=0, remainder,i=1;
    printf("Enter a number: ");
    scanf("%d", &num);
     do{
        remainder = num%10;
        reversenum = reversenum * 10 + remainder;
        num/=10;
        i++;
     }while(num!=0);
     printf("The reverse of a number is %d", reversenum);
    return 0;
}