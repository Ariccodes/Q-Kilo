#include <stdio.h>

int sumArray(int *arr, int n) {
    int sum = 0, i;
    for (i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    return sum;
}

int main() {
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Sum of array elements: %d\n", sumArray(arr, n));

    return 0;
}

