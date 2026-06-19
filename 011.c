#include <stdio.h>
int main()
{
    float cm, m, km;
    printf("Enter your length (cm) :");
    scanf("%f", &cm);
    m = cm/100;
    km = cm/100000;
    printf("The value of length in meter is : %f\n", m);
    printf("The value of length in kilometer is : %f ", km);

    return 0;
}
