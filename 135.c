#include<stdio.h>
#include<ctype.h>
void countCharacters(char str[], int *alphabets, int *digits, int *specialChars)
{
    int i = 0;
    *alphabets = *digits= *specialChars =0;
    while(str[i] != '\0')
    {

        if(isalpha(str[i]))
        {
            (*alphabets)++;
        }
        else if(isdigit(str[i]))
        {
            (*digits)++;
        }
        else{
            (*specialChars)++;
        }
        i++;
    }
}
int main()
{
    char str[100];
    int digits, alphabets, specialChars;
    printf("Enter string :");
    fgets(str, sizeof(str), stdin);
    countCharacters(str, &alphabets, &digits, &specialChars);
    printf("Aplhabets : %d \n", alphabets);
    printf("Digits: %d \n", digits);
    printf("Special Character  : %d \n", specialChars);
    return 0;
}