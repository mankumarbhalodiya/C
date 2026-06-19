#include <stdio.h>
int main()
{
    int phy, chem, bio, math, comp;
    float percentage;
    printf("enter marks of physcis, chemistry, biology, maths, computer :");
    scanf("%d %d  %d %d %d", &phy, &chem, &bio, &math, &comp);
    percentage = ((phy+chem+bio+math+comp)/500) * 100;
    if(percentage>= 90)
    {
        printf("Grade A");
    }
    else if(percentage>=80)
    {
        printf("Grade B");
    }
    else if(percentage>=70)
    {
        printf("Grade C");
    }
    else if (percentage>=60)
    {
        printf("Grade D");
    }
    else if(percentage>=40)
    {
        printf("Grade E");
    }
    else 
    {
        printf("Grade F");
    }
    return 0;
}