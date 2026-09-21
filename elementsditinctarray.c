// Check if the elements on the diagonal of a matrix are distinct.


#include <stdio.h>

// Returns 1 if all diagonal elements are distinct, 0 otherwise
int areDiagonalElementsDistinct(int matrix[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                return 0; // Duplicate found
            }
        }
    }
    return 1; // All diagonal elements are unique
}

int main() {
    int n = 3;
    int matrix[100][100] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    if (areDiagonalElementsDistinct(matrix, n)) {
        printf("Diagonal elements are distinct.\n");
    } else {
        printf("Diagonal elements are NOT distinct.\n");
    }

    return 0;
}   