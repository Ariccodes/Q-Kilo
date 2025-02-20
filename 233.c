// Q337. C program to interchange the rows in the matrix
#include <stdio.h>

void swapRows(int rows, int cols, int mat[rows][cols], int row1, int row2) {
    int j, temp;
    for (j = 0; j < cols; j++) {
        temp = mat[row1][j];
        mat[row1][j] = mat[row2][j];
        mat[row2][j] = temp;
    }
}

int main() {
    int rows, cols, i, j, row1, row2;

    printf("Enter rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int mat[rows][cols];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Enter two row indices to swap (0-based index): ");
    scanf("%d %d", &row1, &row2);

    if (row1 >= 0 && row1 < rows && row2 >= 0 && row2 < rows) {
        swapRows(rows, cols, mat, row1, row2);
        printf("Matrix after swapping rows:\n");
        for (i = 0; i < rows; i++) {
            for (j = 0; j < cols; j++) {
                printf("%d ", mat[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Invalid row indices.\n");
    }

    return 0;
}

