//Q241
#include <stdio.h>

int sumSeries(int n) {
    if (n == 1) return 1;
    return (n % 2 == 0 ? -n : n) + sumSeries(n - 1);
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Sum of the series is %d\n", sumSeries(n));

    return 0;
}

