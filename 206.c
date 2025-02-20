// Q279. C program to find two largest elements in a one dimensional array
#include <stdio.h>

void findTwoLargest(int arr[], int n, int *largest, int *secondLargest) {
    int i;
    if (n < 2) return;

    *largest = *secondLargest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > *largest) {
            *secondLargest = *largest;
            *largest = arr[i];
        } else if (arr[i] > *secondLargest && arr[i] != *largest) {
            *secondLargest = arr[i];
        }
    }
}

int main() {
    int arr[] = {12, 45, 7, 23, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest, secondLargest;

    findTwoLargest(arr, n, &largest, &secondLargest);
    
    printf("Largest: %d, Second Largest: %d\n", largest, secondLargest);
    return 0;
}

