// Q276. C program to count total number of elements divisible by a specific number in an array
#include <stdio.h>

int countDivisibles(int arr[], int n, int div) {
    int i, count = 0;
    for (i = 0; i < n; i++) {
        if (arr[i] % div == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {10, 20, 33, 45, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int divisor = 5;

    printf("Total elements divisible by %d: %d\n", divisor, countDivisibles(arr, n, divisor));
    return 0;
}

