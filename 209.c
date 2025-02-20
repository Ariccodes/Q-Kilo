// Q282. C Program to Cyclically Permute the Elements of an Array
#include <stdio.h>

void cyclicPermute(int arr[], int n) {
    int i, temp = arr[n - 1];

    for (i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[0] = temp;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i;

    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    cyclicPermute(arr, n);

    printf("\nCyclically permuted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

