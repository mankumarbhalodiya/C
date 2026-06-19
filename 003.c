#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a  :  ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
   int a_square = a*a;
   int b_square = b*b;
   int a_cube = a*a*a;
   int b_cube = b*b*b;
    printf("Square of a = %d\n", a_square);
    printf("cube of a = %d\n", a_cube);
    printf("Square of b = %d\n", b_square);
    printf("Cube of b = %d\n", b_cube);

    return 0;
}
