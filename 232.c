// Q336. C program to check a given matrix is a sparse matrix or not
#include <stdio.h>

int isSparseMatrix(int rows, int cols, int mat[rows][cols]) {
    int i, j, zeroCount = 0, totalElements = rows * cols;
    
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (mat[i][j] == 0) {
                zeroCount++;
            }
        }
    }
    
    return zeroCount > (totalElements / 2);
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

    if (isSparseMatrix(rows, cols, mat)) {
        printf("The matrix is a sparse matrix.\n");
    } else {
        printf("The matrix is not a sparse matrix.\n");
    }

    return 0;
}

