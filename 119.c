#include<stdio.h>
int main()
{
    int a[5]={1, 2, 5, 7, 9};
    int n =5;
    int b[n]; 
    for(int i = 0; i<n; i++)
    {
        b[i]= a[i];

    }
    printf("The first array : \n");
    for(int i = 0; i<n; i++)
    {
        printf("%d \t", a[i]);
    }
    printf("The second array is :");
    for(int i = 0; i<n; i++)
    {
        printf("%d \t", b[i]);
    }
    return 0;
}