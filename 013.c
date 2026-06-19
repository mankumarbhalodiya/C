#include <stdio.h>
int main()
{
    int price, chairs, total;
    printf("Enter the number of chairs:");
    scanf("%d", &chairs);
    printf("Enter the total cost :");
    scanf("%d", &total);
    price = total/chairs;
    printf("The price of each chair is :%d", price);
    return 0;
}