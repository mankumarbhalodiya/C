#include <stdio.h>
#include <string.h>

int romanToDecimal(char* roman) {
    int result = 0;
    int prevValue = 0;
    int i;
    for ( i = strlen(roman) - 1; i >= 0; i--) {
        int currentValue = 0;
        switch (roman[i]) {
            case 
			'I': currentValue = 1; 
			break;
            case
			 'V': currentValue = 5; 
			break;
            case
			 'X': currentValue = 10;
			 break;
            case 
			'L': currentValue = 50; 
			break;
            case
			 'C': currentValue = 100;
			break;
            default:
                printf("Invalid Roman numeral\n");
                return 0; 
        }
    return result;
}

int main() {
    char roman[1000];

    printf("Enter a Roman numeral: ");
    scanf("%s", roman);

    int decimal = romanToDecimal(roman);
    
    if (decimal != -1) {
        printf("The decimal equivalent is: %d\n", decimal);
    }

    return 0;
}

