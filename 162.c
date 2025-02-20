//Q231
#include <stdio.h>

long long power(int base, int e) {
    if (e == 0)
        return 1;
    return base * power(base, e - 1);
}

int main() {
    int base, exponent;
    printf("Enter base and exponent: ");
    scanf("%d %d", &base, &exponent);
    printf("%d^%d = %lld\n", base, exponent, power(base, exponent));
    return 0;
}
