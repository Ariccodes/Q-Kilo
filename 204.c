// Q277. C program to create a new array from a given array with the elements divisible by a specific number
#include <stdio.h>

int createDivisibleArray(int arr[], int n, int div, int result[]) {
    int i, j = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] % div == 0) {
            result[j++] = arr[i];
        }
    }
    return j;
}

int main() {
    int arr[] = {10, 20, 33, 45, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int divisor = 5;
    int result[n];
    int newSize, i;

    newSize = createDivisibleArray(arr, n, divisor, result);

    printf("New array with elements divisible by %d: ", divisor);
    for (i = 0; i < newSize; i++) {
        printf("%d ", result[i]);
    }
    return 0;
}

