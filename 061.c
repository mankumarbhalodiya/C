#include<stdio.h>
int main()
{
    int n, first=0, second=1, next, i=0;
    printf("Enter number of terms:");
    scanf("%d",&n);
    do
    {
        if(i<=1)
        {
            next=i;
        }
        else{
            next = first+second;
            first = second;
            second = next;
        }
        printf("%d ", next);
        i++;
       
    } while (i<n);
    
}