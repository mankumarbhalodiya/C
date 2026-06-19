#include<stdio.h>

int main()
{
    
     
    char str[100];
    fgets(str, sizeof(str), stdin);
     int i = 0;
    
    int countVowel=0;
    int countConsonant=0;
   for(int i = 1;str[i] !='\0'; i++){
        if(str[i]=='a' || str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'|| str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]== 'O' || str[i] =='U' )
        {
           countVowel++;
        }
        else
        {
            countConsonant++;
        }
   }
        
    printf("The vowel count = %d and The consonant count = %d", countVowel, countConsonant);
     return 0;
}