// Read and print a matrix.


#include <stdio.h>

int main() {
    int rows, cols;
    
    // 1. Get dimensions
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // 2. Declare 1D array with size equal to total elements
    int matrix[rows * cols];

    // 3. Read elements
    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Map 2D (i, j) to 1D index
            int index = i * cols + j;
            scanf("%d", &matrix[index]);
        }
    }

    // 4. Print elements
    printf("Matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int index = i * cols + j;
            printf("%d\t", matrix[index]);
        }
        printf("\n");
    }

    return 0;
}   