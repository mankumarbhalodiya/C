#include<stdio.h>
int main()
{
    int sum=0, n;
    printf("Enter n:");
    scanf("%d", &n);
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            sum+=i;
        }
    }
    printf("The sum of even numbers is = %d", sum);
    return 0;
}