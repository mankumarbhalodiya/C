#include<stdio.h>
int main()
{
    int number =1;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            printf("%d ", number ++);

        }
        printf("\n");
    }
}