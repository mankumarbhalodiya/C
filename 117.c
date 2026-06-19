#include<stdio.h>
int main()
{
    int size;
    
    printf("Enter size of array:");
    scanf("%d", &size);
    int a[size];
   int max = a[0];
   int min = a[0];
    for(int i = 0;i<size;i++)
    {
        printf("Enter a number :");
        scanf("%d", &a[i]);
        if(a[0]<a[i])
       {
          max= a[i];
       }
       if(a[i]<min)
       {
         min = a[i];
       }
       
       
    }
    printf("The max = %d and The min = %d", max, min);
   
    return 0;
}