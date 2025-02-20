// Q273. C program to delete prime numbers from an array
#include <stdio.h>

int isPrime(int num) {
    int i;
    if (num < 2) return 0;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int removePrimes(int arr[], int n) {
    int i, j = 0;
    for (i = 0; i < n; i++) {
        if (!isPrime(arr[i])) {
            arr[j++] = arr[i];
        }
    }
    return j;
}

int main() {
    int arr[] = {3, 4, 7, 8, 11, 13, 16, 18};
    int n = sizeof(arr) / sizeof(arr[0]);
    int newSize = removePrimes(arr, n);
    int i;

    printf("Array after removing prime numbers: ");
    for (i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

