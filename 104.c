#include <stdio.h>

int main() {
    int i, j, n = 5;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i; j++) printf("%c", 'A' + j);
        for (j = 0; j < i * 2; j++) printf(" ");
        for (j = n - i - 1; j >= 0; j--) printf("%c", 'A' + j);
        printf("\n");
    }
    return 0;
}

