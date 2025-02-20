// Q342. C program to find the sum of main and opposite diagonal elements of a matrix
#include <stdio.h>

int main() {
    int n, i, j, mainDiagSum = 0, oppDiagSum = 0;

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    int mat[n][n];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
            if (i == j) {
                mainDiagSum += mat[i][j];
            }
            if (i + j == n - 1) {
                oppDiagSum += mat[i][j];
            }
        }
    }

    printf("Sum of main diagonal elements: %d\n", mainDiagSum);
    printf("Sum of opposite diagonal elements: %d\n", oppDiagSum);

    return 0;
}

