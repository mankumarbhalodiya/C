#include<stdio.h>
int main()
{
    int size;
    int sum = 0;
    printf("Enter size:");
    scanf("%d", &size);
    int a[size];
    for(int i = 0; i<size; i++)
    {
        printf("Enter a number :");
        scanf("%d", &a[i]);
        if(a[i]%2==0)
        {
            sum +=a[i];
        }
    }
    printf("The sum of even numbers is : %d", sum);
    
    return 0;
}