#include<stdio.h>
#include<string.h>
int main()
{
    char First[]="Three";
    char Second[]="Five";
    int compare = strcmp(First,Second);
    if(compare>0)
    {
        printf("%s", First);
    }
    else 
    {
        printf("%s", Second);
    }
    
}