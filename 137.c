#include<stdio.h>
#include<ctype.h>
int main()
{
    int words = 0;
    int inword = 0; 
    char str[100];
    printf("Enter string :");
    fgets(str,  sizeof(str), stdin);
    for(int i = 1; str[i]!='\0';i++)
    {
        if(isspace(str[i]))
        {
            inword = 0;
        }
        else if(!inword)
        {
            inword=1;
            words++;
        }
    }
    printf("The number of words = %d", words);
    return 0;
}