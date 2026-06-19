#include <stdio.h>

int main() {
    int n, i = 2, isPrime = 1; // isPrime is 1 (true) initially

    // Accept input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Handle special cases
    if (n < 2) {
        printf("%d is not a prime number.\n", n);
        return 0;
    }

    // Check divisibility from 2 to sqrt(n)
    while (i * i <= n) {
        if (n % i == 0) {
            isPrime = 0; // Mark as not prime
            break;
        }
        i++;
    }

    // Print the result
    if (isPrime)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
