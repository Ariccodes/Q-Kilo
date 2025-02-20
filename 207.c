// Q280. C program to find second smallest element in a one dimensional array
#include <stdio.h>

int findSecondSmallest(int arr[], int n) {
    int i, smallest, secondSmallest;

    if (n < 2) return -1;

    smallest = secondSmallest = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }
    
    return (secondSmallest == smallest) ? -1 : secondSmallest;
}

int main() {
    int arr[] = {5, 3, 8, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = findSecondSmallest(arr, n);
    
    if (result == -1)
        printf("No second smallest element found.\n");
    else
        printf("Second smallest element: %d\n", result);
    
    return 0;
}

