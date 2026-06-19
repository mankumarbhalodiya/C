#include <stdio.h>
int main()
{
    float p,r,t, simple_intrest;
    printf("Enter price :");
    scanf("%f", &p);
    printf("Enter rate :");
     scanf("%f", &r);
    printf("Enter time :");
     scanf("%f", &t);
     simple_intrest= p*r*t/100;
     printf("The intrest is = %f", simple_intrest);

    return 0;
}