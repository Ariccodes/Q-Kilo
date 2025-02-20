//Q250
#include <stdio.h>

int sumAP(int a, int d, int n) {
    if (n == 0) return 0;
    return a + sumAP(a + d, d, n - 1);
}

int main() {
    int a, d, n;
    printf("Enter first term, common difference, and number of terms: ");
    scanf("%d %d %d", &a, &d, &n);

    printf("Sum of A.P. series is %d\n", sumAP(a, d, n));

    return 0;
}

