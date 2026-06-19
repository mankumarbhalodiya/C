#include <stdio.h>

int main() {
    int matrixA[3][3], matrixB[3][3], result[3][3] = {0}; 

   
    printf("Enter elements of the first 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element A[%d][%d]: ", i, j);
            scanf("%d", &matrixA[i][j]);
        }
    }

   
    printf("Enter elements of the second 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Element B[%d][%d]: ", i, j);
            scanf("%d", &matrixB[i][j]);
        }
    }

   
    for (int i = 0; i < 3; i++) {          
        for (int j = 0; j < 3; j++) {      
            for (int k = 0; k < 3; k++) {  
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

   
    printf("\nResulting matrix after multiplication:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
