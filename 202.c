// Q275. C program to create array with reverse elements of one dimensional array
#include <stdio.h>

void reverseArray(int arr[], int rev[], int n) {
    int i;
    for (i = 0; i < n; i++) {
        rev[i] = arr[n - i - 1];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int rev[n];
    int i;

    reverseArray(arr, rev, n);

    printf("Reversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", rev[i]);
    }
    return 0;
}

