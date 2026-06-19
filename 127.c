#include <stdio.h>

int main()
{
    int a[3][3], b[3][3];
    int sub[3][3];
    printf("Enter elements of first matrix:\n");
    for(int i =0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("Enter elements of second matrix:\n");
    for(int i =0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
   
    for(int i =0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
          sub[i][j] = a[i][j] - b[i][j];
        }
    }
    
    printf("The final martix:\n");
    for(int i =0; i<3; i++)
    {
        for(int j = 0; j<3; j++)
        {
           printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }
}