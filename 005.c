#include <stdio.h>
int main()
{
    int I,c,d,g,h;
    printf("Enter c :");
    scanf("%d", &c);
    printf("Enter d :");
    scanf("%d", &d);
    printf("Enter g :");
    scanf("%d", &g);
    printf("Enter h :");
    scanf("%d", &h);
    I= (c+d)*(g+h);
    printf("The value of I is = %d", I);
    return 0;
}