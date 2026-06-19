#include<stdio.h>
int main()
{
    int size;
    printf("Enter size of array :");
    scanf("%d", &size);
    int a[size];
    int sum=0;
    for(int i =0; i<size;i++)
    {
        printf("Enter a number :");
        scanf("%d", &a[i]);
        sum +=a[i]; 
    }
    printf("The sum of array elements is : %d", sum);

    return 0;
}