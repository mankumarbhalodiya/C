#include <stdio.h>
int main()
{
    int month;
    printf("Enter the number of month :");
    scanf("%d", &month);
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 )
    {
        printf("This month has 31 days");
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11 )
    {
        printf("This month has 30 days");
    }
    else if (month == 2)
    {
        printf("This month has 28 days and if it is a leap year than 28");
    }
    else{
        printf("Not a valid month");
    }
    return 0;
}