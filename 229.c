#include <stdio.h>

int main() {
    int r, c, i, j, sum = 0, product = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int matrix[r][c];

    printf("Enter matrix elements:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
            product *= matrix[i][j];
        }
    }

    printf("Sum of matrix elements: %d\n", sum);
    printf("Product of matrix elements: %d\n", product);

    return 0;
}

