#include<stdio.h>
#include <string.h>

int main() {
    char binary[100];
    int n, i, foundone = 0;
    printf("Enter  number: ");
    scanf("%s", binary);
    n = strlen(binary);
    for (i = n - 1; i >= 0; i--) {
        if (foundone) {
            binary[i] = (binary[i] == '0') ? '1' : '0';
        }
        if (binary[i] == '1' && !foundone) {
            foundone = 1;
        }
    }
    printf("2's complement: %s\n", binary);

    return 0;
}
