#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], temp;
    int length;

    printf("Enter string:");
    fgets(str, sizeof(str), stdin);
    length = strlen(str);
    if(str[length-1]=='\n')
    {
        str[length-1]='\0';
        length--;
    }
    for(int i = 0; i<length/2; i++)
    {
        temp=str[i];
        str[i]= str[length-i-1];
        str[length-i-1]= temp;
    }
    printf("Reversed string = %s", str);
    return 0;
}