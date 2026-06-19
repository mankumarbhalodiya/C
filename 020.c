#include <stdio.h>
int main()
{
    int ang1, ang2, ang3;
    printf("Enter three angles :");
    scanf("%d %d %d", &ang1, &ang2, &ang3);
    int sum = ang1 + ang2 + ang3;
    if(sum == 180)
    {
        printf("This triangle is valid");
    }
    else
    {
        printf("This triangle is not valid");
    }
    return 0;
}