// Perform diagonal traversal of a matrix.


#include <stdio.h>

void diagonalTraversal(int n, int mat[n][n]) {
    // 1. Traverse diagonals starting from the first row
    for (int col = 0; col < n; col++) {
        int i = 0, j = col;
        while (i < n && j >= 0) {
            printf("%d ", mat[i][j]);
            i++; 
            j--;
        }
    }

    // 2. Traverse diagonals starting from the last column (excluding first row)
    for (int row = 1; row < n; row++) {
        int i = row, j = n - 1;
        while (i < n && j >= 0) {
            printf("%d ", mat[i][j]);
            i++; 
            j--;
        }
    }
}

int main() {
    int n = 3;
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Diagonal Traversal: ");
    diagonalTraversal(n, mat);
    printf("\n");
    return 0;
}   