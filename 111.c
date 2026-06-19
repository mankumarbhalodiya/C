#include<stdio.h>
int factorial(int n);
int combination(int n, int r);
void printPascalTriangle(int rows);
int main()
{
    int rows;
    printf("Enter rows:");
    scanf("%d", &rows);
    printPascalTriangle(rows);
    return 0;
}
int factorial(int n)
{
    int result=1;
    for(int i =1;i<=n;i++)
    {
        result *= i;
    }
    return result;
}
int combination(int n, int r)
{
    return factorial(n)/(factorial(r) * factorial(n-r));
}
void printPascalTriangle(int rows)
{
    for (int i =0; i<rows; i++)
    {
        for (int j=0; j<rows-i-1;j++)
        {
            printf(" ");
        }
        for(int j =0; j<=i;j++)
        {
            printf("%d ", combination(i,j));
        }
        printf("\n");
    }
}