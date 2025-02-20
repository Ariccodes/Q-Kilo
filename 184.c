//Q253
#include <stdio.h>

void floydsTriangle(int rows) {
    int num = 1,i,j;
    for (i = 1; i <= rows; i++) {
        for ( j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }
}

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    floydsTriangle(rows);

    return 0;
}

