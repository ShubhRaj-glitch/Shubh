// Multiply two matrices.


#include <stdio.h>

int main() {
    int A[10][10], B[10][10], C[10][10];
    int r1, c1, r2, c2;

    // Input dimensions
    printf("Enter rows and columns of Matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of Matrix B: ");
    scanf("%d %d", &r2, &c2);

    // Check compatibility
    if (c1 != r2) {
        printf("Matrix multiplication not possible (Columns of A != Rows of B).\n");
        return 1;
    }

    // Input elements for Matrix A
    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);

    // Input elements for Matrix B
    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);

    // Initialize result matrix to zero
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            C[i][j] = 0;

    // Multiply matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display result
    printf("Resultant Matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}   