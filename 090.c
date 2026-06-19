#include<stdio.h>
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d", &n);
    printf("The even numbers are:");
    for(int i =1;i<=n;i++)
    {
        if(i%2==0)
        {
            printf("%d \n",i);
        }
    }
    return 0;
}