#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
	int i;
    int array1[] = {1, 4, 2, 3, 5};
    int array2[] = {7, 8, 6};
    int k = 5;
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);

    int combined_size = size1 + size2;
    int combined[combined_size];
    
    for ( i = 0; i < size1; i++) {
        combined[i] = array1[i];
    }
    
    for ( i = 0; i < size2; i++) {
        combined[size1 + i] = array2[i];
    }

    qsort(combined, combined_size, sizeof(int), compare);
    
    printf("The %d-th element is: %d\n", k, combined[k-1]);
    
    return 0;
}

