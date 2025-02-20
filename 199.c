// Q272. C program to calculate median of an array
#include <stdio.h>

void sortArray(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

float findMedian(int arr[], int n) {
    sortArray(arr, n);
    if (n % 2 == 0)
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    else
        return arr[n / 2];
}

int main() {
    int arr[] = {7, 1, 3, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Median of array: %.2f\n", findMedian(arr, n));
    return 0;
}

