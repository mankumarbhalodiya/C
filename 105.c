#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("Enter rows:");
    scanf("%d", &rows);
    for(int i=rows;i>=1;i--)
    {
        for(j=1;j<=rows-i+1;j++)
        {
            printf("%d",i);
        }
    }
    return 0;
}