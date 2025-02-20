//Q176
#include <stdio.h>

int main() {
    int n, year = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (year <= n) {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            printf("%d ", year);
        year++;
    }

    return 0;
}

