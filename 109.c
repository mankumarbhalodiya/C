#include <stdio.h>
int main()
{
    int i,j;
    int rows;
    int num=2;
    printf("Enter rows:");
    scanf("%d", &rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",num);
            num+=2;
        }
        printf("\n");
    }
    return 0;
}