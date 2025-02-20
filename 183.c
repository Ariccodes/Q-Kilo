//Q252
#include <stdio.h>

double sumHP(int n) {
    if (n == 1) return 1.0;
    return 1.0 / n + sumHP(n - 1);
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Sum of H.P. series is %lf\n", sumHP(n));

    return 0;
}

