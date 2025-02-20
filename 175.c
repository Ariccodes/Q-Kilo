//Q244
#include <stdio.h>
#include <math.h>

double sumSeries(int n) {
    if (n == 1) return 1;
    return pow(n, 2) / tgamma(n + 1) + sumSeries(n - 1);
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Sum of the series is %lf\n", sumSeries(n));

    return 0;
}

