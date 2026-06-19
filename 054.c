#include<stdio.h>
int main()
{
    int i =1;
    int sum =0;
    do
    {
        if(i%2==0)
        {
            sum -=i;
        }
        else
        {
            sum +=i;
        }
        i++;
    } while (i<=10);
    printf("The sum = %d", sum);
    return 0;
}