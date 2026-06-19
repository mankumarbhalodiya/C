#include <stdio.h>
#include <string.h>
int roman_to_decimal(char c) {
    switch (c) {
        case 
		'I': return 1;
        case
		 'V': return 5;
        case
		 'X': return 10;
        case
		 'L': return 50;
        default: return 0;
    }
}

int main() {
    char roman[100];
    int i, length, decimal = 0;
    printf("Enter a Roman numeral: ");
    scanf("%s", roman);
    length = strlen(roman);
    for (i = 0; i < length; i++) {
        int current = roman_to_decimal(roman[i]);
        int next = (i + 1 < length) ? roman_to_decimal(roman[i + 1]) : 0;
        if (current < next) {
            decimal -= current;
        } else {
            decimal += current;
        }
    }
    printf("Decimal equivalent: %d\n", decimal);

    return 0;
}
