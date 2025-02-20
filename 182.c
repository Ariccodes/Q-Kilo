//Q251
#include <stdio.h>
#include <math.h>

double sumGP(double a, double r, int n) {
    if (n == 0) return 0;
    return a * pow(r, n - 1) + sumGP(a, r, n - 1);
}

int main() {
    double a, r;
    int n;
    printf("Enter first term, common ratio, and number of terms: ");
    scanf("%lf %lf %d", &a, &r, &n);

    printf("Sum of G.P. series is %lf\n", sumGP(a, r, n));

    return 0;
}

