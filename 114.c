#include<stdio.h>
int main()
{
    int a[5];
    for(int i =0; i<5;i++)
    {
        printf("Enter a number :");
        scanf("%d", &a[i]);
    }
    for(int i = 0; i<5;i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}