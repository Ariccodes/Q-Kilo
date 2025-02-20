// Q344. C program to find the trace of a matrix
#include <stdio.h>

int main() {
    int n, i, j,trace = 0;

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    int mat[n][n];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for ( j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
            if (i == j) {
                trace += mat[i][j];
            }
        }
    }

    printf("Trace of the matrix: %d\n", trace);

    return 0;
}

