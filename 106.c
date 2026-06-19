#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("Enter rows:");
    scanf("%d", &rows);
    for(i=1;i<=rows;i++)
    {
        for(j=rows;j>=rows-i+1;j--)
        {
            printf("%d",j);
        }
    }
    return 0;
}