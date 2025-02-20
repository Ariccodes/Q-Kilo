//Q243
#include <stdio.h>
#include <math.h>

double sinSeries(double x, int n) {
    if (n == 0) return x;
    return pow(-1, n) * pow(x, 2 * n + 1) / tgamma(2 * n + 2) + sinSeries(x, n - 1);
}

int main() {
    double x;
    int terms;
    printf("Enter x in radians and number of terms: ");
    scanf("%lf %d", &x, &terms);

    printf("Sin(%lf) using series expansion is %lf\n", x, sinSeries(x, terms - 1));

    return 0;
}

