// Q335. C program to check a given matrix is an identity matrix or not
#include <stdio.h>

int isIdentityMatrix(int rows, int cols, int mat[rows][cols]) {
    int i, j;
    if (rows != cols) {
        return 0;
    }
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if ((i == j && mat[i][j] != 1) || (i != j && mat[i][j] != 0)) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int rows, cols, i, j;

    printf("Enter rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int mat[rows][cols];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    if (isIdentityMatrix(rows, cols, mat)) {
        printf("The matrix is an identity matrix.\n");
    } else {
        printf("The matrix is not an identity matrix.\n");
    }

    return 0;
}

