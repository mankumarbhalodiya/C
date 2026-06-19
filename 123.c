#include <stdio.h>

void findDuplicates(int arr[], int n) {
    int isDuplicate = 0;

    printf("Duplicate elements in the array are:\n");

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                // Check if this duplicate element has already been printed
                isDuplicate = 0;
                for (int k = 0; k < i; k++) {
                    if (arr[k] == arr[i]) {
                        isDuplicate = 1;
                        break;
                    }
                }
                if (!isDuplicate) {
                    printf("%d ", arr[i]);
                }
                break;  // Exit inner loop after finding the first duplicate
            }
        }
    }
    printf("\n");
}

int main() {
    int arr[100], n;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and display duplicate elements
    findDuplicates(arr, n);

    return 0;
}
