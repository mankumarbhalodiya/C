#include <stdio.h>
int main()
{
    int value;
    printf("Enter the value :");
    scanf("%d", &value);
    if(value>0)
    {
        printf("The value is greater than zero");
    }
    else if(value<0)
    {
        printf("The value is less than zero");
    }
    else{
        printf("The value is equal to zero");
    }
    return 0;
}