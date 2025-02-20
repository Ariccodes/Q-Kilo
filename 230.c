// Q334. C program to check two matrices are identical or not
#include <stdio.h>

int areIdentical(int rows, int cols, int mat1[rows][cols], int mat2[rows][cols]) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (mat1[i][j] != mat2[i][j]) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int rows, cols, i, j;
    
    printf("Enter rows and columns of matrices: ");
    scanf("%d %d", &rows, &cols);

    int mat1[rows][cols], mat2[rows][cols];

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    if (areIdentical(rows, cols, mat1, mat2)) {
        printf("Matrices are identical.\n");
    } else {
        printf("Matrices are not identical.\n");
    }

    return 0;
}

