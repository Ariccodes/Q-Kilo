// Q291. C program to Add and Subtract of Two One Dimensional Array elements
#include <stdio.h>

int main() {
    int n, i;

    printf("Enter size of arrays: ");
    scanf("%d", &n);
    int arr1[n], arr2[n], sum[n], diff[n];

    printf("Enter %d elements for first array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d elements for second array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < n; i++) {
        sum[i] = arr1[i] + arr2[i];
        diff[i] = arr1[i] - arr2[i];
    }

    printf("Sum array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }
    printf("\n");

    printf("Difference array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", diff[i]);
    }
    printf("\n");

    return 0;
}

