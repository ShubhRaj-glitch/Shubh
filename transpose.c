// Find the transpose of a matrix.
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Allocate 1D arrays to store matrix elements and transpose
    int matrix[rows * cols];
    int transpose[cols * rows];

    // Input elements
    printf("Enter %d elements:\n", rows * cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int index = i * cols + j;
            scanf("%d", &matrix[index]);
        }
    }

    // Calculate transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int index = i * cols + j;
            transpose[j * rows + i] = matrix[index];
        }
    }

    // Print transpose
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            int index = i * rows + j;
            printf("%d\t", transpose[index]);
        }
        printf("\n");
    }

    return 0;
}