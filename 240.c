// Q345. C program to print the upper triangular matrix
#include <stdio.h>

int main() {
    int mat[3][3], i, j;

    printf("Enter elements of 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Upper triangular matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (j < i) {
                printf("0 ");
            } else {
                printf("%d ", mat[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}

