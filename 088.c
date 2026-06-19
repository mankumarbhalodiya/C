#include<stdio.h>
int main()
{
    int num, firstdigit, lastdigit, product;
    printf("Enter num:");
    scanf("%d", &num);
    lastdigit =num%10;
    for(firstdigit=num;firstdigit>=10;firstdigit/=10);
    
         product = firstdigit*lastdigit;
          
    
    printf("The product is = %d", product);
   
    return 0;
}