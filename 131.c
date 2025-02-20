//Q172
#include <stdio.h>

int main() {
    int n, i = 2, j, isPrime;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n) {
        isPrime = 1;
        j = 2;
        while (j * j <= i) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
            j++;
        }
        if (isPrime)
            printf("%d ", i);
        i++;
    }

    return 0;
}

