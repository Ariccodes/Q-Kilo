//Q138
#include <stdio.h>

int main() {
    int num, shift, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter shift count: ");
    scanf("%d", &shift);

    result = num >> shift;  // Right shift operation

    printf("%d >> %d = %d\n", num, shift, result);

    return 0;
}

