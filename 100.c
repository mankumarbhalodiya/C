#include <stdio.h>

int main() {
    char str[100], letter;
    int count = 0;

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

   
    printf("Enter the letter to count: ");
    scanf("%c", &letter);

    
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == letter) {
            count++;
        }
    }

    printf("The letter '%c' occurs %d times in the string.\n", letter, count);

    return 0;
}
