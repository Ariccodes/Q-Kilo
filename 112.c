//Q95
#include <stdio.h>

int sumOfDigitsUntilSingle(int num) {
    while (num >= 10) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }
    return num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Single digit sum: %d\n", sumOfDigitsUntilSingle(num));

    return 0;
}

