//Q246
#include <stdio.h>
#include <math.h>

double sumSeries(double x, int n) {
    if (n < 1) return 0;
    return x / tgamma(n + 1) + sumSeries(x, n - 2);
}

int main() {
    double x;
    int n;
    printf("Enter x and the number of terms: ");
    scanf("%lf %d", &x, &n);

    printf("Sum of the series is %lf\n", sumSeries(x, n));

    return 0;
}

