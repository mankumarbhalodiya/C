#include<stdio.h>
#include<ctype.h>
void Uppercase(char str[])
{
    int i =0;
    while ( str[i]!= '\0')
    {
        str[i]= toupper(str[i]);
        i++;
    }
    
}
int main()
{
    char str[100];
    printf("Enter the string in lower case :");
    fgets(str, sizeof(str), stdin);
    Uppercase(str);
    printf("The string in upper case : %s", str);
    
    return 0;
}