//Q162
#include <stdio.h>
int main() {
    int n, i = 2;
    printf("Enter N: ");
    scanf("%d", &n);
    while (i <= n) {
        printf("%d \n", i);
        i += 2;
    }
    return 0;
}
