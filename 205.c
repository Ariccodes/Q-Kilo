// Q278. C program to find second largest element in a one dimensional array
#include <stdio.h>

int findSecondLargest(int arr[], int n) {
    int i, largest, secondLargest;

    if (n < 2) return -1; 

    largest = secondLargest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    
    return (secondLargest == largest) ? -1 : secondLargest;
}

int main() {
    int arr[] = {10, 5, 8, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findSecondLargest(arr, n);
    
    if (result == -1)
        printf("No second largest element found.\n");
    else
        printf("Second largest element: %d\n", result);
    
    return 0;
}

