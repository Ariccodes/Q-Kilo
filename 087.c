#include <stdio.h>

int main() {
    int year, lastDigit, secondLastDigit;

    printf("Enter the year: ");
    scanf("%d", &year);

    lastDigit = year % 10;
    year /= 10;
    secondLastDigit = year % 10;

    printf("Last two digits: %d%d\n", secondLastDigit, lastDigit);

    return 0;
}

