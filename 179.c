//Q248
#include <stdio.h>
#include <math.h>

double sumSeries(double x, int n) {
    if (n < 0) return 0;
    return 1 / pow(x, n) + sumSeries(x, n - 1);
}

int main() {
    double x;
    int n;
    printf("Enter x and the number of terms: ");
    scanf("%lf %d", &x, &n);

    printf("Sum of the series is %lf\n", sumSeries(x, n));

    return 0;
}

