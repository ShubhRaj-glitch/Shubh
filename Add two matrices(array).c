// Add two matrices


#include <stdio.h>

int main() {
    int r, c, i, j;
    int a[10][10], b[10][10], sum[10][10];

    // 1. Input dimensions
    printf("Enter number of rows (max 10): ");
    scanf("%d", &r);
    printf("Enter number of columns (max 10): ");
    scanf("%d", &c);

    // 2. Input elements for first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // 3. Input elements for second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // 4. Add matrices
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // 5. Print result
    printf("Sum of two matrices:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}