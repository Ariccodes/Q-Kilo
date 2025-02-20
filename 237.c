// Q341. C program to find the frequency of even numbers in matrix
#include <stdio.h>

int main() {
    int rows, cols, i, j, count = 0;

    printf("Enter rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int mat[rows][cols];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] % 2 == 0) {
                count++;
            }
        }
    }

    printf("Frequency of even numbers in the matrix: %d\n", count);

    return 0;
}

