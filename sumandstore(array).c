// Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Allocate 1D arrays to store matrix elements and row sums
    int matrix[rows * cols];
    int rowSums[rows];

    // Initialize row sums to 0
    for (int i = 0; i < rows; i++) {
        rowSums[i] = 0;
    }

    // Input elements
    printf("Enter %d elements:\n", rows * cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int index = i * cols + j;
            scanf("%d", &matrix[index]);
        }
    }

    // Calculate sum of each row
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int index = i * cols + j;
            rowSums[i] += matrix[index];
        }
    }

    // Print row sums
    printf("Sum of each row:\n");
    for (int i = 0; i < rows; i++) {
        printf("Row %d: %d\n", i + 1, rowSums[i]);
    }

    return 0;
}