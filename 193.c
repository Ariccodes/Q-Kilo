//Q263 C program to pass two dimensional array (Two-D array) to a function
#include <stdio.h>

void printMatrix(int arr[3][3], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("Matrix:\n");
    printMatrix(matrix, 3, 3);
    return 0;
}

