//Q175
#include <stdio.h>
#include <math.h>

int main() {
    int n, i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n) {
        printf("%d -> Square: %d, Cube: %d, Square Root: %.2f\n", 
               i, i * i, i * i * i, sqrt(i));
        i++;
    }

    return 0;
}

