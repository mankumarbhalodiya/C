#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d", &n);
    int firstarr[n], secondrr[n];
     int *ptr1= firstarr;
    int *ptr2= secondrr;
    printf("Enter elements of array:");
    for(int i =0; i<n;i++)
    {
        scanf("%d", ptr1+i);
    }

    for(int i =0;i<n;i++)
    {
        *(ptr2+i)= *(ptr1+i);
    }
    printf("The copied array is :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d \t", secondrr[i]);
    }

    return 0;
}