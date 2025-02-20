#include <stdio.h>

int main() {
    int i, j, num = 1;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= num; j++) {
            printf("%d", j);
        }
        num += 2;
        printf("\n");
    }
    return 0;
}

