#include<stdio.h>
int main()
{
    int i,j, rows;
    printf("Enter rows:");
    scanf("%d", &rows);
    for(int i = 1; i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d", j%2);
        }
        printf("\n");
    }
    return 0;
}