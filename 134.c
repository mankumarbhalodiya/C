#include<stdio.h>
#include<ctype.h>
void lowercase(char str[])
{
    int i =0;
    while ( str[i]!= '\0')
    {
        str[i]= tolower(str[i]);
        i++;
    }
    
}
int main()
{
    char str[100];
    printf("Enter the string in uppercase :");
    fgets(str, sizeof(str), stdin);
    lowercase(str);
    printf("The string in lowercase : %s", str);
    
    return 0;
}