// Find the sum of main diagonal elements for a square matrix.


#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);

    int matrix[100][100]; // Assuming max size 100x100
    int sum = 0;

    // Input matrix elements
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of main diagonal
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }

    printf("Sum of main diagonal elements: %d\n", sum);
    return 0;
}   