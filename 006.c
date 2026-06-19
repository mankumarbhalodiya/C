#include <stdio.h>
int main()
{
    float a,p,r,n;
    printf("Enter r:");
    scanf("%f", &r);
     printf("Enter n:");
     scanf("%f", &n);
      printf("Enter p:");
      scanf("%f", &p);
      a= p*(1+(r/100)/n)-p;
      printf("The value of a = %f", a);
    return 0;
}