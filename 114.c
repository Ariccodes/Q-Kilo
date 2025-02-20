//Q135
#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        if (num % 10 == 1)  // Check if the last digit is 1
            count++;
        num /= 10;  // Remove the last digit
    }

    printf("Number of 1's in decimal: %d\n", count);

    return 0;
}

