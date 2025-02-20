// Q281. C program to find two smallest elements in a one dimensional array
#include <stdio.h>

void findTwoSmallest(int arr[], int n, int *smallest, int *secondSmallest) {
    int i;
    if (n < 2) return;

    *smallest = *secondSmallest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] < *smallest) {
            *secondSmallest = *smallest;
            *smallest = arr[i];
        } else if (arr[i] < *secondSmallest && arr[i] != *smallest) {
            *secondSmallest = arr[i];
        }
    }
}

int main() {
    int arr[] = {20, 4, 8, 2, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int smallest, secondSmallest;

    findTwoSmallest(arr, n, &smallest, &secondSmallest);
    
    printf("Smallest: %d, Second Smallest: %d\n", smallest, secondSmallest);
    return 0;
}

