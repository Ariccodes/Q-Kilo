//Q245
#include <stdio.h>

double sumSeries(int n) {
    if (n == 1) return 1.0 * 2 / 3;
    return (n * (n + 1)) / (double)(n + 2) + sumSeries(n - 1);
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Sum of the series is %lf\n", sumSeries(n));

    return 0;
}

