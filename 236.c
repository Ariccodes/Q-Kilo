// Q340. C program to arrange column elements in ascending order
#include <stdio.h>

void sortColumn(int rows, int mat[rows], int col) {
    int i, j, temp;
    for (i = 0; i < rows - 1; i++) {
        for (j = i + 1; j < rows; j++) {
            if (mat[i] > mat[j]) {
                temp = mat[i];
                mat[i] = mat[j];
                mat[j] = temp;
            }
        }
    }
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

    for (j = 0; j < cols; j++) {
        int column[rows];
        for (i = 0; i < rows; i++) {
            column[i] = mat[i][j];
        }
        sortColumn(rows, column, j);
        for (i = 0; i < rows; i++) {
            mat[i][j] = column[i];
        }
    }

    printf("Matrix after sorting columns in ascending order:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

