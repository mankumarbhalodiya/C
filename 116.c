#include<stdio.h>
int main()
{
    int size;
    printf("Enter size :");
    scanf("%d", &size);
    int a[size];
    int i,j,n;
    for(int i = 0; i<size;i++)
    {
        printf("Enter element :");
        scanf("%d", &a[i]);
        }

        
        for(int i = 0; i<size; i++)
        {
           for(int j = i+1; j<size;j++)
           {
            if(a[i]>a[j])
           {
            n= a[i];
            a[i]= a[j];
            a[j]= n;

           }
           }
        }
        for(int i = 0; i<size; i++)
        {
            printf("%d\n", a[i]);
        }
    return 0;
}