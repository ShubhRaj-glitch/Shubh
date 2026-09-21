// Check if a matrix is symmetric


#include <stdio.h>
#include <stdbool.h>

bool isSymmetric(int matrix[][100], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n = 3;
    int matrix[100][100] = {
        {1, 2, 3},
        {2, 4, 5},
        {3, 5, 6}
    };

    if (isSymmetric(matrix, n)) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }
    return 0;
}   