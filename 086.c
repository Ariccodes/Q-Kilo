#include <stdio.h>

int main() {
    float real1, imag1, real2, imag2, realSum, imagSum;

    printf("Enter first complex number (real and imaginary): ");
    scanf("%f %f", &real1, &imag1);

    printf("Enter second complex number (real and imaginary): ");
    scanf("%f %f", &real2, &imag2);

    realSum = real1 + real2;
    imagSum = imag1 + imag2;

    printf("Sum = %.2f + %.2fi\n", realSum, imagSum);
    
    return 0;
}

