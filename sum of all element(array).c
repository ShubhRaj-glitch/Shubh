// Find the sum of all elements in a matrix.




#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Allocate 1D array to store matrix elements
    int matrix[rows * cols];
    int sum = 0;

    // Input elements
    printf("Enter %d elements:\n", rows * cols);
    for (int i = 0; i < rows * cols; i++) {
        scanf("%d", &matrix[i]);
    }

    // Calculate sum using 1D array
    for (int i = 0; i < rows * cols; i++) {
        sum += matrix[i];
    }

    printf("Sum of all elements: %d\n", sum);
    return 0;
}   