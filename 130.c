#include<stdio.h>
#include<string.h>
int main()
{
    char oldValue[]="oldValue";
   char newValue[10];
   strcpy(newValue, oldValue);
   puts(newValue);
    return 0;
}