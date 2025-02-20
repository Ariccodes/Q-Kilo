//Q173
#include <stdio.h>

int main() {
    int n, i = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (i <= n) {
        if (i % 2 == 0)
            printf("%d EVEN\n", i);
        else
            printf("%d ODD\n", i);
        i++;
    }

    return 0;
}

