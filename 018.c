#include <stdio.h>
int main()
{
    char alpha;
    printf("Enter a character :");
    scanf("%d", &alpha);
    if ((alpha>= 'a' && alpha<= 'z') || (alpha>='A' && alpha<='Z'))
    {
        printf("The entered character is a alphabet");
    }
    else{
        printf("The entered character is not a alphabet");
    }
    return 0;
}