//Q128
#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, compoundInterest;
    int n;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter time (in years): ");
    scanf("%lf", &time);

    printf("Enter number of times interest is compounded per year: ");
    scanf("%d", &n);

    amount = principal * pow((1 + rate / (100 * n)), n * time);
    compoundInterest = amount - principal;

    printf("Compound Interest: %.2lf\n", compoundInterest);
    printf("Total Amount: %.2lf\n", amount);

    return 0;
}

