// Q338. C program to interchange the columns in the matrix
#include <stdio.h>

void swapColumns(int rows, int cols, int mat[rows][cols], int col1, int col2) {
    int i, temp;
    for (i = 0; i < rows; i++) {
        temp = mat[i][col1];
        mat[i][col1] = mat[i][col2];
        mat[i][col2] = temp;
    }
}

int main() {
    int rows, cols, i, j, col1, col2;

    printf("Enter rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int mat[rows][cols];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Enter two column indices to swap (0-based index): ");
    scanf("%d %d", &col1, &col2);

    if (col1 >= 0 && col1 < cols && col2 >= 0 && col2 < cols) {
        swapColumns(rows, cols, mat, col1, col2);
        printf("Matrix after swapping columns:\n");
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                printf("%d ", mat[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Invalid column indices.\n");
    }

    return 0;
}

