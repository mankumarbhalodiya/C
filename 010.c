#include <stdio.h>
int main()
{
    float celsius, fahrenheit;
    printf("Enter celsius :");
    scanf("%f", &celsius);
    fahrenheit = (9/5)*celsius+32;
    printf("The fahrenheit is = %f", fahrenheit);
    return 0;
}